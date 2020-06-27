#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int moves = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == i % 2)
        {
            continue;
        }
        else
        {
            int flag = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 == i % 2 && arr[i] % 2 == j % 2)
                {
                    swap(arr[i], arr[j]);
                    moves++;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                cout << -1;
                return;
            }
        }
    }

    cout << moves;
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