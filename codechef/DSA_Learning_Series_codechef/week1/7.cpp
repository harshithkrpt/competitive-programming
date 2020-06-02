#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int g;
    cin >> g;
    while (g--)
    {
        int i, q, n;
        cin >> i;
        cin >> n;
        cin >> q;

        // Even Coins
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            if (q == 1)
            {
                if (i == 1)
                {
                    cout << n / 2 << "\n";
                }
                else
                {
                    cout << n / 2 + 1 << "\n";
                }
            }
            else
            {
                if (i == 1)
                {
                    cout << n / 2 + 1 << "\n";
                }
                else
                {
                    cout << n / 2 << "\n";
                }
            }
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