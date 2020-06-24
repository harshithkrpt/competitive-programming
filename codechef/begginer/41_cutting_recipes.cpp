// RECIPE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (min > a[i])
            min = a[i];
    }

    for (int i = min; i > 1; i--)
    {
        int flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i != 0)
            {
                flag = false;
            }
        }

        if (flag)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[j] / i << " ";
            }
            return;
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
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