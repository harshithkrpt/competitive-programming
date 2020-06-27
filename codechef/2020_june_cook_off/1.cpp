#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, b, m;
    cin >> n >> b >> m;
    int cnt = 0;
    int cb = -1;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;

        if (cb != floor(num / b) || cb == -1)
        {
            cb = floor(num / b);
            cnt++;
        }
    }

    cout << cnt;
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