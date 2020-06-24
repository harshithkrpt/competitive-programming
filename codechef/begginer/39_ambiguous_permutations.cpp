// PERMUT2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<int> a(n + 1);
        unordered_map<int, int> hash;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            hash[a[i]] = i;
        }

        vector<int> a1(n + 1);

        for (int i = 1; i <= n; i++)
        {
            a1[i] = hash[i];
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a1[i] != a[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "ambiguous";
        else
        {
            cout << "not ambiguous";
        }
        cout << "\n";
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
    solve();
    return 0;
}