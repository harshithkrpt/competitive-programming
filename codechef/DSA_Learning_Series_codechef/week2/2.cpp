#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A B penality shoot out

void solve()
{
    int n;
    string s;
    int a_scores = 0;
    int b_scores = 0;
    cin >> n;
    cin >> s;
    int i = 0;
    int a = n, b = n;
    for (i = 0; i < 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '1')
                a--;
            else
                b--;
        }
        else
        {
            if (s[i] == '1')
                b--;
            else
                a--;
        }
        if (a < 0 || b < 0)
        {
            cout << i + 1;
            return;
        }
    }
    cout << 2 * n;
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