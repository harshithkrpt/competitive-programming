/* 
 *  
 *      (x! + y!) mod (10^{9} + 7) 
 */

#include <iostream>
typedef long long ll;
using namespace std;

#define MODP 1000000007

ll fact(ll a)
{
    ll ans = 1;
    for (int i = 2; i <= a; i++)
    {
        ans = ans * i;
        ans = ans % MODP;
    }
    return ans;
}

void solve(ll x, ll y)
{
    cout << ((fact(x) % MODP) + (fact(y) % MODP)) % MODP;
}

int main()
{
    ll x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}