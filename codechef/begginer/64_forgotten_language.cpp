// FRGTNLNG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        int n, k;
        cin >> n >> k;
        unordered_map<string, bool> hash;
        vector<string> ar(n);
        for (int i = 0; i < n; i++)
        {
            string name;
            cin >> name;
            ar[i] = name;
            hash[name] = false;
        }

        for (int j = 0; j < k; j++)
        {
            int l;
            cin >> l;
            for (int i = 0; i < l; i++)
            {
                string name;
                cin >> name;
                hash[name] = true;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (hash[ar[i]])
            {
                cout << "YES ";
            }
            else
            {
                cout << "NO ";
            }
        }
        cout << "\n";
    }
    return 0;
}