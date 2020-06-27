// STRPALIN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    cin >> a >> b;

    // Only 3 Digit Substring

    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            if (a[i] == b[j])
            {
                cout << "Yes";
                return;
            }
        }
    }

    cout << "No";
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