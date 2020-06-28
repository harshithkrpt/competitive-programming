// ZCOSCH
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n = 1;
    cin >> n;

    if (n <= 50)
    {
        cout << 100;
    }
    else if (n > 50 && n <= 100)
    {
        cout << 50;
    }
    else
    {
        cout << 0;
    }

    return 0;
}