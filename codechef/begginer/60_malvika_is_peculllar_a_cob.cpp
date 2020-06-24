// CHN09
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a = 0, b = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            a++;
        else
            b++;
    }

    if (a > b)
    {
        cout << b;
    }
    else
    {
        cout << a;
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