#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nob(int dtb, int dc, int ps)
{
    return ceil(dtb / dc) * ps;
}

void solve()
{
	ll a,b,c;
	cin >> a >> b >> c;

	if(c <= a)
		cout << "-1 ";
	else
		cout << "1 ";

	if(c >= a * b)
		cout << "-1";
	else
		cout << b;
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
