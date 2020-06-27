// MAXMEX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m_count = 0;
    set<int> ss;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            m_count++;
        }
        else if (arr[i] <= m - 1)
        {
            ss.insert(arr[i]);
        }
    }

    if (ss.size() != m - 1)
    {
        cout << -1;
    }
    else
    {
        cout << n - m_count;
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