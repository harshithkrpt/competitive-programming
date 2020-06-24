// FRUITS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (n < m)
    {
        if (k > (m - n))
        {
            k -= m - n;
            cout << 0;
        }
        else
        {
            n += k;
            cout << m - n;
        }
    }
    else if (n > m)
    {
        if (k > (n - m))
        {
            k -= n - m;
            cout << 0;
        }
        else
        {
            m += k;
            cout << n - m;
        }
    }
    else
    {
        cout << 0;
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