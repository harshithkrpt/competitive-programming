// BFTT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	n++;
	while(true)
	{
		ll cnt = 0;
		ll temp = n;
		while(temp != 0)
		{
			if(temp%10==3) cnt++;
			temp/=10;
		}
		if(cnt > 2)
		{
		 break;
		}	
		n++;	
	}
	cout << n;
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
