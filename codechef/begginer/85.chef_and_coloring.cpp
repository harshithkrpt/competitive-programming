// COLOR
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int r = 0, g = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'R')
            r++;
        else if (str[i] == 'G')
            g++;
        else
            b++;
    }

    int maxi = max(r, max(g, b));

    if (maxi == r)
    {
        cout << n - r;
    }
    else if (maxi == g)
    {
        cout << n - g;
    }
    else if (maxi == b)
    {
        cout << n - b;
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