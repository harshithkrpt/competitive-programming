// TICKETS5
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    if (s.length() == 2)
    {
        if (s[0] == s[1])
        {
            cout << "NO";
        }
        else
            cout << "YES";
        return;
    }

    char a = '#';
    char b = '#';

    for (int i = 0; i < s.length(); i++)
    {
        if (i & 1)
        {
            if (b == '#')
            {
                b = s[i];
            }
            else if (b != s[i])
            {
                cout << "NO";
                return;
            }
        }
        else
        {
            if (a == '#')
            {
                a = s[i];
            }
            else if (a != s[i])
            {
                cout << "NO";
                return;
            }
        }
    }

    if (a == b)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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