// PCJ18C
/* 
 *  Sum of internal Angles S = 180 * (n-2)
 *  S = n/2(2a + (n-1)d) 
 * 
 */
// TODO REVISE AND UNDERSTAND
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, a, k;
    cin >> n >> a >> k;

    ll sum_of_angles = 180 * (n - 2);
    ll d_num = (2 * (sum_of_angles - (a * n)));
    ll d_dem = (n * (n - 1));

    ll num = a * d_dem + (k - 1) * d_num;
    ll den = d_dem;
    ll g = __gcd(num, den);
    num /= g;
    den /= g;

    cout << num << " " << den;
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
