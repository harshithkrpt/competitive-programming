// PRB01
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int dc = 0;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            dc++;
        }
    }

    if (n != 1)
        dc++;
    if (dc == 2)
    {
        cout << "yes";
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