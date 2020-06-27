// TABLET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll b;
    cin >> b;

    ll max_ar = LONG_LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        ll p, w, h;
        cin >> w >> h >> p;

        if (p <= b && max_ar < w * h)
        {
            max_ar = w * h;
        }
    }

    if (max_ar == LONG_LONG_MIN)
    {
        cout << "no tablet";
        return;
    }
    cout << max_ar;
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