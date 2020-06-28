#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int hash[200005];
    bool flag = true;
    int m = INT_MIN;

    for (int i = 0; i < 200005; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash[a[i]]++;

        if (hash[a[i]] > 2)
        {
            flag = false;
        }

        m = max(m, a[i]);
    }

    if (!flag || hash[m] == 2)
    {
        cout << "NO";
        return;
    }

    cout << "YES\n";

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]] == 2)
        {
            cout << a[i] << " ";
            hash[a[i]]--;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (hash[a[i]] == 1)
        {
            cout << a[i] << " ";
            hash[a[i]]--;
        }
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