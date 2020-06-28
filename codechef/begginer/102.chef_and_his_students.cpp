// CHEFSTUD
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == '>')
    //     {
    //         s[i] = '<';
    //     }
    //     else if (s[i] == '<')
    //     {
    //         s[i] = '>';
    //     }
    // }

    int ans = 0;

    if (s.length() == 1)
    {
        cout << 0;
        return;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '<' && s[i + 1] == '>')
        {
            ans++;
            i++;
        }
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