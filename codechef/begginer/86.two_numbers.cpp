// TWONMS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

void solve()
{
    ull a, b, n;
    cin >> a >> b >> n;
    ull ans;
    if (n % 2 == 0)
    {
        ans = max(a, b) / min(a, b);
    }
    else
    {
        ans = max(a * 2, b) / min(a * 2, b);
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