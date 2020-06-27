// MATCHES
// 0 6
// 1 2
// 2 5
// 3 5
// 4 4
// 5 5
// 6 6
// 7 3
// 8 7
// 9 6
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int count(int num)
{
    if (num == 0)
        return 6;
    else if (num == 1)
        return 2;
    else if (num == 2)
        return 5;
    else if (num == 3)
        return 5;
    else if (num == 4)
        return 4;
    else if (num == 5)
        return 5;
    else if (num == 6)
        return 6;
    else if (num == 7)
        return 3;
    else if (num == 8)
        return 7;
    else
        return 6;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = a + b;
    ll ans = 0;
    while (c)
    {
        ans += count(c % 10);
        c = c / 10;
    }

    cout << ans;
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