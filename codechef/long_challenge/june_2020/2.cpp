// XYSTR
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str;
    unordered_map<int, bool> hash;
    int ans = 0;
    cin >> str;
    if (str.size() == 1)
    {
        cout << 0;
        return;
    }
    if (str.size() == 2)
    {
        if (str == "xy" || str == "yx")
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        return;
    }

    for (int i = 1; i < str.size() - 1; i++)
    {
        if (str[i] == 'x')
        {
            if (str[i - 1] == 'y' && !hash[i - 1])
            {
                hash[i - 1] = true;
                hash[i] = true;
                ans++;
            }
            else if (str[i + 1] == 'y' && !hash[i + 1])
            {
                hash[i + 1] = true;
                hash[i] = true;
                ans++;
                i++;
            }
        }
        else
        {

            if (str[i - 1] == 'x' && !hash[i - 1])
            {
                hash[i - 1] = true;
                hash[i] = true;
                ans++;
            }
            else if (str[i + 1] == 'x' && !hash[i + 1])
            {
                hash[i + 1] = true;
                hash[i] = true;
                ans++;
                i++;
            }
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