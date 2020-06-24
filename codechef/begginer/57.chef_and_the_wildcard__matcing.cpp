// TWOSTR
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?')
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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