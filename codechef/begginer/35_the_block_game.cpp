// PALL01
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while (temp)
    {
        rev *= 10;
        rev += temp % 10;
        temp /= 10;
    }
    if (rev == n)
    {
        cout << "wins";
    }
    else
    {
        cout << "loses";
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