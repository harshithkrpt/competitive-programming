#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll s, n;
    cin >> s >> n;

    ll ans;

    if (s & 1)
    {
        ans = 1;
        s--;
    }
    else
    {
        ans = 0;
    }

    if (s >= n)
    {
        ans += s / n;
        s = s % n;
    }

    if (s < n && s != 0)
    {
        ans++;
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