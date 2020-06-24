// TWTCLOSE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    unordered_map<int, bool> hash;
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        if (s == "CLOSEALL")
        {
            for (auto &x : hash)
            {
                x.second = false;
            }
            cnt = 0;
        }
        else
        {
            int n;
            cin >> n;
            if (hash[n])
            {
                cnt--;
                hash[n] = false;
            }
            else
            {
                cnt++;
                hash[n] = true;
            }
        }
        cout << cnt << "\n";
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