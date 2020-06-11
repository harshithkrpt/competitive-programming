// DIET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n;
    cin >> k;
    int pl = 0;
    vector<int> pb(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pb[i];
    }

    for (int i = 0; i < n; i++)
    {
        pl += pb[i] - k;
        if (pl < 0)
        {
            cout << "NO " << i + 1;
            return;
        }
    }

    cout << "YES";
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