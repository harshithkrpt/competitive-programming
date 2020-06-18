// DPAIRS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;
	vector<ll> A(n);
	vector<ll> B(m);
	unordered_map<int, int> AHash;
	unordered_map<int, int> BHash;

	for (ll i = 0; i < n; i++)
	{
		cin >> A[i];
		AHash[A[i]] = i;
	}

	for (ll i = 0; i < m; i++)
	{
		cin >> B[i];
		BHash[B[i]] = i;
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	ll pairs = 0;
	ll j = AHash[A[0]];
	for(ll i=0;i<m;i++)
	{
		cout << j << " " << BHash[B[i]] << "\n";
	}

	j = BHash[B[m-1]];
	for(ll i=1;i<n;i++)
	{
		cout << AHash[A[i]]<< " " << j << "\n";
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
