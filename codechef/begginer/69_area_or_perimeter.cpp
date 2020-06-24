// AREAPERI
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int l, b;
    cin >> l >> b;

    if ((l * b) > (2 * (l + b)))
    {
        cout << "Area\n";
        cout << l * b;
    }
    else if ((l * b) < (2 * (l + b)))
    {
        cout << "Peri\n";
        cout << 2 * (l + b);
    }
    else
    {
        cout << "Eq";
        cout << 2 * (l + b);
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

    solve();

    return 0;
}