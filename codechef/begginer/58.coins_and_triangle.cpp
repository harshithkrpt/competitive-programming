// TRICOIN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<unsigned long long> n)
{
    ll n1;
    cin >> n1;

    auto el = lower_bound(n.begin(), n.end(), n1);

    if (*el == n1)
    {
        cout << el - n.begin();
    }
    else
    {
        cout << el - n.begin() - 1;
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
    vector<unsigned long long> n(100001);
    for (int i = 1; i < 100001; i++)
    {
        n[i] = (i * (i + 1)) / 2;
    }

    while (t--)
    {
        solve(n);
        cout << "\n";
    }
    return 0;
}