// STFOOD
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        int s, p, v;
        cin >> s;
        cin >> p;
        cin >> v;

        int temp = (p / (s + 1));
        temp *= v;
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max;
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
