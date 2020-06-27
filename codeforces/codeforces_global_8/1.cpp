#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll temp = max(a, b);
    if (temp == b)
    {
        b = a;
        a = temp;
    }

    ll count = 0;
    while (a <= c && b <= c)
    {

        b = a + b;
        count++;
        if (b > c)
        {
            break;
        }
        a = a + b;
        count++;
        if (a > c)
        {
            break;
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}