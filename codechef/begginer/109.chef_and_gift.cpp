// PRGIFT
// a trick question
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    int test = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            test++;
        }
    }

    if ((k && test >= k) || (!k && test < n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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