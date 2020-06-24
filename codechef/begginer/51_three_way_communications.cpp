// COMM3
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int r;
    cin >> r;
    vector<pair<int, int>> pos(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> pos[i].first >> pos[i].second;
    }

    int a = pow((pos[0].first - pos[1].first), 2) + pow(pos[0].second - pos[1].second, 2);
    int b = pow((pos[1].first - pos[2].first), 2) + pow(pos[1].second - pos[2].second, 2);
    int c = pow((pos[2].first - pos[0].first), 2) + pow(pos[2].second - pos[0].second, 2);

    if (a <= r * r && b <= r * r && c <= r * r)
    {
        cout << "yes";
        return;
    }

    if (a <= r * r && b <= r * r)
    {
        cout << "yes";
        return;
    }

    if (a <= r * r && c <= r * r)
    {
        cout << "yes";
        return;
    }

    if (b <= r * r && c <= r * r)
    {
        cout << "yes";
        return;
    }

    cout << "no";
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