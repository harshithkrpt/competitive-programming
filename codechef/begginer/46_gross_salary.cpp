// FLOW011
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if (n < 1500)
    {
        double gs = 2 * n;
        printf("%.2f", gs);
    }
    else
    {
        double gs = 1.98 * n + 500;
        printf("%.2f", gs);
    }
    printf("\n");
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