// CHEFSQ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<ll> b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int prev = -1;
    for (int i = 0; i < m; i++)
    {
        int flag = false;
        for (int j = prev + 1; j < n; j++)
        {
            if (b[i] == a[j])
            {
                prev = j;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "No";
            return;
        }
    }

    cout << "Yes";
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