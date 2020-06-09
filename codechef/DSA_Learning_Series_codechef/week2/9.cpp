// ZCO12002
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, x, y;
    vector<pair<int, int>> contests;
    vector<int> v;
    vector<int> w;

    cin >> n;
    cin >> x;
    cin >> y;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> inp;
        cin >> inp.first >> inp.second;
        contests.push_back(inp);
    }

    for (int i = 0; i < x; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < y; i++)
    {
        int num;
        cin >> num;
        w.push_back(num);
    }

    sort(v.begin(), v.end());

    sort(w.begin(), w.end());

    ll min = LONG_LONG_MAX;

    for (int i = 0; i < n; i++)
    {

        auto lb_x = upper_bound(v.begin(), v.end(), contests[i].first);
        auto lb_y = lower_bound(w.begin(), w.end(), contests[i].second);
        lb_x--;

        if (*lb_x <= contests[i].first && *lb_y >= contests[i].second)
        {
            ll current_min = *lb_y - *lb_x + 1;

            if (current_min < min)
            {
                min = current_min;
            }
        }
    }

    cout << min;
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
    cout << "\n";
    return 0;
}