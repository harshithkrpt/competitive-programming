#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int num;
    cin >> num;
    int sum = 0;
    sum = num % 10;
    num = num / 10;

    if (num == 0)
    {
        cout << sum * 2;
        return;
    }

    while (((int)log10(num) + 1) != 1)
    {
        num = num / 10;
    }

    sum += num % 10;

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