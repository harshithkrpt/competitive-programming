// CIELRCPT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int p;
    cin >> p;

    int ans = 0;

    while (p >= 2048)
    {
        p -= 2048;
        ans++;
    }

    while (p >= 1024)
    {
        p -= 1024;
        ans++;
    }

    while (p >= 512)
    {
        p -= 512;
        ans++;
    }

    while (p >= 256)
    {
        p -= 256;
        ans++;
    }

    while (p >= 128)
    {
        p -= 128;
        ans++;
    }

    while (p >= 64)
    {
        p -= 64;
        ans++;
    }

    while (p >= 32)
    {
        p -= 32;
        ans++;
    }

    while (p >= 16)
    {
        p -= 16;
        ans++;
    }

    while (p >= 8)
    {
        p -= 8;
        ans++;
    }

    while (p >= 4)
    {
        p -= 4;
        ans++;
    }

    while (p >= 2)
    {
        p -= 2;
        ans++;
    }

    if (p == 1)
    {
        p--;
        ans++;
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
