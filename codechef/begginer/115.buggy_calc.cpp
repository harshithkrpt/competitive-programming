// BUGCAL
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    unsigned long long a, b;
    cin >> a >> b;

    string ans = "";
    if (log10(a) >= log10(b))
    {
        while (a)
        {
            ans = to_string((a + b) % 10) + ans;
            a /= 10;
            b /= 10;
        }
    }
    else
    {
        while (b)
        {
            ans = to_string((a + b) % 10) + ans;
            a /= 10;
            b /= 10;
        }
    }

    cout << stoi(ans);
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