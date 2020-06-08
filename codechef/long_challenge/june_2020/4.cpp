// EOEO

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    if (n % 2 == 1)
    {
        cout << n / 2;
        return;
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    cout << n / 2;
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