// WATSCORE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[9] = {0};

    for (int i = 0; i < n; i++)
    {
        int num, score;
        cin >> num >> score;

        if (num <= 8)
            if (arr[num] < score)
            {
                arr[num] = score;
            }
    }

    int sum = 0;
    for (int i = 1; i <= 8; i++)
    {
        sum += arr[i];
    }

    cout << sum;
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