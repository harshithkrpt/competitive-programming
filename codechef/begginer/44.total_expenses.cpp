// FLOW009
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int q;
    double p;
    cin >> q >> p;
    if (q < 1000)
    {
        printf("%.6lf\n", (p * q));
        return;
    }

    p = (p * q * 0.9);

    printf("%.6lf\n", p);
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
    }
    return 0;
}