// AMR15A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int oc = 0, ec = 0;
    for (int i = 0; i < n; i++)
    {
        int ww;
        cin >> ww;
        if (ww & 1)
            oc++;
        else
            ec++;
    }

    if (ec > oc)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
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