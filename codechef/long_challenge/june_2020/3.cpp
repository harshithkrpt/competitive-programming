// CHFICRM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[3] = {0};
    vector<int> inp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }

    if (inp[0] != 5)
    {
        cout << "NO";
        return;
    }
    else
    {
        arr[0] = 1;
    }
    for (int i = 1; i < n; i++)
    {

        if (inp[i] == 5)
            arr[0]++;
        else
        {
            if (inp[i] == 10)
            {
                if (arr[0] > 0)
                    arr[0]--;
                else
                {
                    cout << "NO";
                    return;
                }

                arr[1]++;
            }
            else
            {
                if (arr[1] > 0)
                {
                    arr[1]--;
                }
                else if (arr[0] > 1)
                {
                    arr[0] -= 2;
                }
                else
                {
                    cout << "NO";
                    return;
                }
                arr[2]++;
            }
        }
    }
    cout << "YES";
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