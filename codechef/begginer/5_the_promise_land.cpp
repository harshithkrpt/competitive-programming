// ISHVALA

// N units vert M units horizontal
// TODO Later
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int N, M, X, Y, S;
    cin >> N >> M;
    cin >> X >> Y >> S;
    vector<int> x_river_flow(X);
    vector<int> y_river_flow(Y);
    for (int i = 0; i < X; i++)
    {
        int num;
        cin >> num;
        x_river_flow.push_back(num);
    }

    for (int i = 0; i < Y; i++)
    {
        int num;
        cin >> num;
        y_river_flow.push_back(num);
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