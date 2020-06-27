// HOWMANY
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "1";
        return;
    }
    n = ((ll)log10(n)) + 1;
    if (n == 1)
    {
        cout << "1";
    }
    else if (n == 2)
    {
        cout << "2";
    }
    else if (n == 3)
    {
        cout << "3";
    }
    else
    {
        cout << "More than 3 digits";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}