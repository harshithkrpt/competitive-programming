// COPS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// ANS IS BRUTE FORCE
void solve()
{
    int m, x, y;
    cin >> m >> x >> y;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<bool> hs(101, false);
    for (int i = 0; i < m; i++)
    {
        int j = a[i];
        hs[j] = true;
        int steps = x * y;
        while (j != 0 && steps != 0)
        {
            j--;
            steps--;
            if (!hs[j])
                hs[j] = true;
        }
        steps = x * y;
        j = a[i];
        while (j != 101 && steps != 0)
        {
            j++;
            steps--;
            if (!hs[j])
                hs[j] = true;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (!hs[i])
            cnt++;
    }
    cout << cnt;
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