// CO92JUDG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int total1 = 0;
    int total2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max1 < a[i])
            max1 = a[i];
        total1 += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (max2 < b[i])
            max2 = b[i];
        total2 += b[i];
    }

    total1 = total1 - max1;
    total2 = total2 - max2;

    if (total1 < total2)
    {
        cout << "Alice";
    }
    else if (total1 > total2)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Draw";
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