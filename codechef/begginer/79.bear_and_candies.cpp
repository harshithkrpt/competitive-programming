// CANDY123
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;
    int dec_a = 1;
    int dec_b = 2;
    while (true)
    {

        a -= dec_a;

        if (a < 0)
        {
            cout << "Bob";
            return;
        }

        b -= dec_b;

        if (b < 0)
        {
            cout << "Limak";
            return;
        }

        dec_a += 2;
        dec_b += 2;
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