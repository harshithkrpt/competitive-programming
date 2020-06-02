// SAFEROBO
#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>
typedef long long ll;

void solve()
{
    string s;
    int sa, sb;
    cin >> s;
    cin >> sa;
    cin >> sb;
    int a_pos;
    int b_pos;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            a_pos = i;
            break;
        }
    }
    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] == 'B')
        {
            b_pos = i;
            break;
        }
    }
    while (a_pos <= b_pos)
    {
        if (a_pos == b_pos)
        {
            cout << "unsafe";
            return;
        }
        a_pos += sa;
        b_pos -= sb;
    }

    cout << "safe";
    return;
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