// PPSUM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll d, n;
    cin >> d >> n;
    ll sum = 0;
    for (int i = 0; i < d; i++)
    {
        sum = n * (n + 1) / 2;
        n = sum;
    }

    cout << sum;
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