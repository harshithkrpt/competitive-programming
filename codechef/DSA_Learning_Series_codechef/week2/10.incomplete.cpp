// ZCO15004
// TODO
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    int max_area = INT_MIN;
    cin >> n;
    vector<pair<ll, ll>> points;
    pair<ll, ll> bl(0, 0);
    points.push_back(bl);
    for (ll i = 0; i < n; i++)
    {
        pair<ll, ll> inp;
        cin >> inp.first;
        cin >> inp.second;
        points.push_back(inp);
    }
    pair<ll, ll> br(100000, 0);
    points.push_back(br);
    ll max_diff = LONG_LONG_MIN;
    sort(points.begin(), points.end());
    for (ll i = 1; i <= n + 1; i++)
    {
        if (max_diff < (points[i].first - points[i - 1].first))
        {
            max_diff = (points[i].first - points[i - 1].first);
        }
    }
    max_area = max_diff * 500;

    int min_y = INT_MAX;
    for (ll i = 1; i < n + 1; i++)
    {
        if (points[i].second < min_y)
        {
            min_y = points[i].second;
            int temp_area = points[i].second * points[i].first;
            if (temp_area > max_area)
            {
                max_area = temp_area;
            }
        }
    }
    min_y = INT_MAX;
    for (ll i = n; i >= 1; i--)
    {
        if (points[i].second < min_y)
        {
            min_y = points[i].second;
            int temp_area = (points[i].second) * abs(100000 - points[i].first);
            if (temp_area > max_area)
            {
                max_area = temp_area;
            }
        }
    }

    if (min_y * 100000 > max_area)
    {
        max_area = min_y * 100000;
    }

    cout << max_area;
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

    solve();
    cout << "\n";
}