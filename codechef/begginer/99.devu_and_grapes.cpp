// DEVUGRAP
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll nu;
        cin >> nu;

        ll r = nu % k;
        if (nu >= k)
            ans += min(r, k - r);
        else
        {
            ans += k - r;
        }
    }

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