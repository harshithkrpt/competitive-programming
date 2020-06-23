// FLOW010
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    char c;
    cin >> c;
    if (c == 'b' || c == 'B')
    {
        cout << "BattleShip";
        return;
    }
    if (c == 'c' || c == 'C')
    {
        cout << "Cruiser";
        return;
    }
    if (c == 'D' || c == 'd')
    {
        cout << "Destroyer";
        return;
    }
    if (c == 'f' || c == 'F')
    {
        cout << "Frigate";
        return;
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