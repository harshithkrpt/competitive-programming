// CLIPLX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x, y;
    cin >> x >> y;

    cout << max(0, x - y);
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