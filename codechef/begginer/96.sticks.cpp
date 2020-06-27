// STICKS
// MY METHOD NOT WORKED AND SOLUTION FROM EDITORIAL
// GREEDY APPROACH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    vector<pair<int, int>> v;

    for (int i = 0; i + 1 < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            v.push_back(make_pair(a[i], a[i + 1]));
            ++i;
        }
    }

    if (v.size() < 2)
    {
        cout << "-1\n";
    }
    else
    {
        cout << 1LL * v[0].first * v[1].first;
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