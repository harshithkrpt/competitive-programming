// CHFINTRO
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, r;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num >= r)
        {
            cout << "Good boi\n";
        }
        else
        {
            cout << "Bad boi\n";
        }
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