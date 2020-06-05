// NOTALLFL

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    int freq[k + 1] = {0}, a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int start = 0, end = 0, d = 0, max_l = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] == 0)
            d++;
        while (d == k)
        {
            freq[a[start]]--;
            if (freq[a[start]] == 0)
            {
                d = k - 1;
            }
            start++;
        }
        max_l = max(max_l, end - start + 1);
        end++;
        freq[a[i]]++;
    }
    cout << max_l;
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