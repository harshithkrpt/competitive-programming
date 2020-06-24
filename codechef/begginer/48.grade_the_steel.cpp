// FLOW014
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int h, t;
    double c;
    cin >> h >> c >> t;

    bool hb = false;
    bool cb = false;
    bool tb = false;
    if (h > 50)
        hb = true;
    if (c < 0.7)
        cb = true;

    if (t > 5600)
        tb = true;

    if (hb && cb && tb)
    {
        cout << 10;
        return;
    }

    if (hb && cb)
    {
        cout << 9;
        return;
    }

    if (cb && tb)
    {
        cout << 8;
        return;
    }

    if (hb && tb)
    {
        cout << 7;
        return;
    }

    if (!hb && !cb && !tb)
    {
        cout << 5;
    }
    else
    {
        cout << 6;
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