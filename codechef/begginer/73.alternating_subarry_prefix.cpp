// ALTARAY
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<signed long long int> a(n);
    vector<signed long long int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    signed long long int prec = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        if ((prec > 0 && a[i] < 0) || (prec < 0 && a[i] > 0) || cnt == 0)
        {
            prec = a[i];
            cnt++;
            ans[i] = cnt;
        }
        else
        {
            cnt = 1;
            prec = a[i];
            ans[i] = cnt;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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