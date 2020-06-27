// LONGSEQ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str;
    cin >> str;
    int os = 0;
    int zs = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            zs++;
        else
            os++;
    }

    if ((os == 1 && zs == str.size() - 1) || (os == str.size() - 1 && zs == 1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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