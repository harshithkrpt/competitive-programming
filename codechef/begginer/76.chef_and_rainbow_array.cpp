// RAINBOWA
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int h = n - 1;
    int prev = 0;
    while (l <= h)
    {
        if (a[l] <= 7 && a[h] <= 7 && a[l] == a[h] && (prev == a[l] || prev == a[l] - 1))
        {
            prev = a[l];
            l++;
            h--;
        }
        else
        {
            cout << "no";
            return;
        }
    }

    if (prev == 7)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
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