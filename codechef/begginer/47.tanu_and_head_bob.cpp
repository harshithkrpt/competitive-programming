// HEADBOB
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            cout << "INDIAN";
            flag = false;
            break;
        }
        if (s[i] == 'Y')
        {
            cout << "NOT INDIAN";
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "NOT SURE";
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