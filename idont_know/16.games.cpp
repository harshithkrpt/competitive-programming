#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	unordered_map<int,int> hash;
	vector<int> g(n);
	
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		hash[num]++;
		cin >> g[i];
	}
	
	int ans = 0;
	
	for(int i=0;i<n;i++)
	{
		ans += hash[g[i]];
	}
	
	cout << ans;
	
	return 0;
}
