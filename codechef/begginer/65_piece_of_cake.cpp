// LCH15JAB
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    unordered_map<char, int> hash;
    int max = INT_MIN;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;

        if (max < hash[s[i]])
        {
            max = hash[s[i]];
        }
    }

    if (s.size() == 2 * max)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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