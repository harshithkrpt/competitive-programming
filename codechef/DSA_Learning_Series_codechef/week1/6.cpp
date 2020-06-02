// PROBLEM CODE FCTRL
#include <bits/stdc++.h>
using namespace std;

// trailing 0 's

/* 
    n 

    summation n / 5 ^ k + 1 until 5 ^ k + 1 < n  

 */

void solve()
{
    int input, zeroes = 0, c = 5;

    cin >> input;

    while ((input / c) > 0)
    {
        zeroes += (input / c);
        c *= 5;
    }
    cout << zeroes;
    ;
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