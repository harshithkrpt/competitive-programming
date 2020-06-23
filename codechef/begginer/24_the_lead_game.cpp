#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a_score = 0;
    int b_score = 0;
    pair<int, int> max(-1, 0);
    for (int i = 0; i < n; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;
        a_score += p1;
        b_score += p2;

        if (max.second < abs(a_score - b_score))
        {
            max.second = abs(a_score - b_score);
            max.first = a_score > b_score ? 1 : 2;
        }
    }

    cout << max.first << " " << max.second;
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