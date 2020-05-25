// MULTHREE
// TODO Complete This Plm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll k, d0, d1;
    cin >> k;
    cin >> d0;
    cin >> d1;
    ll sum = d0 + d1;
    ll j = 3;
    while (j <= k)
    {
        int d1 = (sum % 10);
        if (d1 == 2)
        {
            break;
        }
        sum += d1;
        j++;
    }
    if (j < k)
    {
        ll times20 = (k - j + 1) / 4;

        sum = sum + (20 * times20);
        int rem = (k - j + 1) % 4;
        switch (rem)
        {
        case 1:
            sum = sum + 2;
            break;
        case 2:
            sum = sum + 6;
            break;

        case 3:
            break;
            sum = sum + 14;
        default:
            break;
        }
    }

    if (sum % 3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}