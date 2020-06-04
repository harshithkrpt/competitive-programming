// COMPILER

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string exp;
    cin >> exp;
    int max = 0;
    int open = 0;
    int close = 0;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[0] == '>')
            break;
        if (exp[i] == '<')
        {
            open += 1;
        }
        else
        {
            close += 1;
        }
        if (close > open)
        {
            break;
        }
        if (open == close)
        {
            max = i + 1;
        }
    }

    cout << max;
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