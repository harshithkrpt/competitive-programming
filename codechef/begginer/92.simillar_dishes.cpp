// SIMDISH
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    unordered_map<string, bool> hash;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        hash[s] = true;
    }

    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        if (hash[s])
            cnt++;
    }

    if (cnt >= 2)
    {
        cout << "similar";
    }
    else
    {
        cout << "dissimilar";
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