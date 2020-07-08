#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	unordered_map<char,bool> hash;
	int n = s.size();
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			if(!hash[s[i]]) {
				hash[s[i]] = true;
				ans++;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}
