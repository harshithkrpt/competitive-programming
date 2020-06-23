// SUMTRIAN
// IMP -> DYNAMIC PROGRAMMING
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int c;
    cin >> c;
    vector<vector<int>> inp(c);
    vector<vector<int>> dp(c);
    for (int i = 0; i < c; i++)
    {
        inp[i] = vector<int>(i + 1);

        for (int j = 0; j <= i; j++)
        {
            cin >> inp[i][j];
        }
    }

    for (int i = c - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            inp[i - 1][j - 1] = max(inp[i][j] + inp[i - 1][j - 1], inp[i][j - 1] + inp[i - 1][j - 1]);
        }
    }

    cout << inp[0][0];
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