// DWNLD
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    int amount = 0;
    for (int i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;

        if (k != 0)
        {
            k = k - t;
            if (k < 0)
            {
                k = k + t;
                amount += (t - k) * d;
                k = 0;
            }
        }
        else
        {
            amount += d * t;
        }
    }

    cout << amount;
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