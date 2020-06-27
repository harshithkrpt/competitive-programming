// TALAZY
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, b, m;
    cin >> n >> b >> m;

    ll ans = 0;

    while (n)
    {
        ll mul;
        if (n & 1)
        {
            mul = (n + 1) / 2;
        }
        else
        {
            mul = n / 2;
        }

        ans += (mul * m) + b;
        m *= 2;
        n = n - mul;
    }

    ans -= b;

    cout << ans;
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