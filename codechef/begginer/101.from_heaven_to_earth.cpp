// ELEVSTRS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, v1, v2;
    cin >> n >> v1 >> v2;

    double time_elev = v2 * n;
    double time_st = sqrt(2) * n * v1;
    if (time_elev > time_st)
    {
        cout << "Elevator";
    }
    else
    {
        cout << "Stairs";
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