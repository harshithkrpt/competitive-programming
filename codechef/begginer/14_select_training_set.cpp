// TRAINSET
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	unordered_map<string, pair<int, int>> hash;

	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		int r;
		cin >> name;
		cin >> r;

		if (hash[name].first > 0 || hash[name].second > 0)
		{
			if (r)
			{
				hash[name].second++;
			}
			else
			{
				hash[name].first++;
			}
		}
		else
		{
			pair<int, int> a;
			if (r)
			{
				a.first = 0;
				a.second = 1;
			}
			else
			{
				a.first = 1;
				a.second = 0;
			}

			hash[name] = a;
		}
	}

	for (auto x = hash.begin(); x != hash.end(); x++)
	{
		int x1 = x->second.first;
		int x2 = x->second.second;
		if (x1 > x2)
		{
			cnt += x1;
		}
		else
		{
			cnt += x2;
		}
	}

	cout << cnt;
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
