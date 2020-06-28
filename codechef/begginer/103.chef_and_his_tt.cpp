// TTENIS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int n = s.length();
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            a++;
        else
            b++;

        if (a == 10 && b == 10)
        {
            flag = true;
        }

        if (a == 11 && b < 10 && !flag)
        {
            cout << "WIN";
            return;
        }

        if (a < 10 && b == 11 && !flag)
        {
            cout << "LOSE";
            return;
        }

        if (flag && a - b == 2)
        {
            cout << "WIN";
            return;
        }

        if (flag && b - a == 2)
        {
            cout << "LOSE";
            return;
        }
    }
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