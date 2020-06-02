// MULTHREE

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
    if (k == 2)
    {
        if (sum % 3 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        return;
    }

    if (sum == 5 || sum == 10 || sum == 15)
    {
        cout << "NO";
        return;
    }
    ll j = 3;
    while (j <= k)
    {
        int d2 = (sum % 10);
        if (d2 == 2)
        {
            break;
        }
        sum += d2;
        j++;
    }
    if (j < k)
    {
        ll times20 = (k - j + 1) / 4;

        sum = sum + (20 * times20);
        int rem = (k - j + 1) % 4;

        if (rem == 1)
        {
            sum += 2;
        }
        else if (rem == 2)
        {
            sum += 6;
        }
        else if (rem == 3)
        {
            sum += 14;
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
