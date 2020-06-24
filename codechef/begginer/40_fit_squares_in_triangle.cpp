// TRISQ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// https://discuss.codechef.com/t/trisq-editorial/9632

void solve()
{
    /* 
    *   f(b) = b /2 - 1 + f(b-2)
    *   f(b) = sum first n/2 natural numbers
    *  */
    ll b;
    cin >> b;
    b /= 2;
    cout << (b * (b - 1)) / 2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}