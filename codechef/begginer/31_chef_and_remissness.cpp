// REMISS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (a > b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }

    cout << " ";
    cout << a + b;
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