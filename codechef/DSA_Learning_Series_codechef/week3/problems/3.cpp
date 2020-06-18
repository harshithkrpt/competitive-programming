// CVOTE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int N, M;
	cin >> N >> M;
	unordered_map<string, string> name_country;
	map<string, int> chef_votes;
	map<string, int> countries;
	for (int i = 0; i < N; i++)
	{
		string name, country;
		cin >> name >> country;
		name_country[name] = country;
	}

	for (int i = 0; i < M; i++)
	{
		string name;
		cin >> name;
		chef_votes[name]++;
		countries[name_country[name]]++;
	}

	int max_votes = 0;
	string name = "";
	for (auto x = countries.begin(); x != countries.end(); x++)
	{
		if (x->second > max_votes)
		{
			max_votes = x->second;
			name = x->first;
		}
	}

	cout << name << "\n";

	max_votes = 0;
	name = "";
	for (auto x = chef_votes.begin(); x != chef_votes.end(); x++)
	{
		if (x->second > max_votes)
		{
			max_votes = x->second;
			name = x->first;
		}
	}

	cout << name << "\n";
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
