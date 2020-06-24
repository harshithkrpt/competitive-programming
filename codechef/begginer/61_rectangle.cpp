// RECTANGL
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && c == d)
    {
        cout << "YES";
    }
    else if (a == c && b == d)
    {
        cout << "YES";
    }
    else if (a == d && b == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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