// FLOW005
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n >= 100)
    {
        n -= 100;
        ans++;
    }
    while (n >= 50)
    {
        n -= 50;
        ans++;
    }
    while (n >= 10)
    {
        n -= 10;
        ans++;
    }

    while (n >= 5)
    {
        n -= 5;
        ans++;
    }
    while (n >= 2)
    {
        n -= 2;
        ans++;
    }

    while (n >= 1)
    {
        n -= 1;
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