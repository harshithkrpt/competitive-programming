// VCS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 1 4 6 7
// 1 2 3 4 6 7

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int trac_ign = 0;
    int untr_unig = 0;
    vector<int> ignored(m);
    vector<int> hash(101);
    for (int i = 0; i < m; i++)
    {
        cin >> ignored[i];
        hash[ignored[i]] = 1;
    }
    vector<int> tracked(k);
    for (int i = 0; i < k; i++)
    {
        cin >> tracked[i];
        if (hash[tracked[i]])
        {
            trac_ign++;
        }
        else
        {
            hash[tracked[i]] = 1;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (hash[i] == 0)
            untr_unig++;
    }

    cout << trac_ign << " " << untr_unig;
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