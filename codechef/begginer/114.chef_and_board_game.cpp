// PCJ18B
// https://discuss.codechef.com/t/pcj18b-editorial/19721
// TODO UNDERSTAND WITH CLARITY
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int N = n / 2;
    int t1 = 4 * (N * (N + 1) * (2 * N + 1) / 6);
    int t2 = n * (n + 1) * (2 * n + 1) / 6;

    if (n & 1)
        cout << t2 - t1 << endl;
    else
        cout << t1 << endl;
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
        }
    return 0;
}