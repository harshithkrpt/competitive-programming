// CARVANS
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, speed;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> speed;
        v.push_back(speed);
    }

    ll maxsp = v[0], count = 1;
    for (ll i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            v[i] = v[i - 1];
        }
        else
            count++;
    }
    cout << count;
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