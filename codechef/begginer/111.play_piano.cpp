// PLAYPIAN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int i = 0;
    bool f = true;
    while (i < n)
    {
        if (s[i] == 'A' && s[i + 1] == 'A')
        {
            f = false;
            break;
        }

        if (s[i] == 'B' && s[i + 1] == 'B')
        {
            f = false;
            break;
        }

        i += 2;
    }

    if (!f)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
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