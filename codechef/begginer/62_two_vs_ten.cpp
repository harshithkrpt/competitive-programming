// TWOVSTEN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    unsigned long long int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        if (n % 10 == 0)
        {
            cout << cnt;
            return;
        }
        else
        {
            cnt++;
            n *= 2;
        }
    }

    cout << -1;
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