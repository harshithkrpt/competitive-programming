// LOSTMAX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    getline(cin, s);

    stringstream s1;

    s1 << s;

    int a[100];

    int n = 0;
    while (s1 >> a[n++])
        ;
    n -= 2;

    int seen = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n + 1; i++)
    {
        if (a[i] == n)
            if (seen)
                ans = max(a[i], ans);
            else
            {
                seen = 1;
            }
        else
        {
            ans = max(a[i], ans);
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}