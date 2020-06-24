// KTTABLE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    // a is already sorted
    vector<unsigned long long int> a(n + 1);
    vector<unsigned long long int> b(n);

    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - a[i - 1] >= b[i - 1])
        {
            cnt++;
        }
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