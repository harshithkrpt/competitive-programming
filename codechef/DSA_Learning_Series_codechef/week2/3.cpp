// STUPMACH
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    long int n;
    cin >> n;
    long int num;
    cin >> num;
    long int max_sum = num;
    long int min_box = num;
    for (long int i = 1; i < n; i++)
    {
        cin >> num;
        if (min_box > num)
        {
            min_box = num;
        }
        max_sum += min_box;
    }

    cout << max_sum;
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