// CATSDOGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Good Lessons learned from this
void solve()
{
    long long int c, d, l;
    cin >> c >> d >> l;

    if ((l % 4 == 0) && (l <= ((c + d) * 4)))
    {
        int min_legs;
        if (2 * d - c < 0)
        {
            min_legs = (c - d) * 4;
        }
        else
        {
            min_legs = d * 4;
        }

        if (l < min_legs)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
    }
    else
    {
        cout << "no";
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