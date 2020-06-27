#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s1;
    cin >> s1;

    string s2;
    s2 += s1[0];
    for (int i = 1; i < s1.size() - 1; i += 2)
    {
        s2 += s1[i];
    }
    s2 += s1[s1.size() - 1];

    cout << s2;
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