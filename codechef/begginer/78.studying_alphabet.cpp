#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, bool> hash;
    for (char i = 'a'; i <= 'z'; i++)
    {
        hash[i] = false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] = true;
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        bool flag = true;
        for (int j = 0; j < name.size(); j++)
        {
            if (!hash[name[j]])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
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

    solve();

    return 0;
}