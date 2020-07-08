#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	char c = 'a';
	int ans = 0;
	int n = s.size();
	for(int i=0;i<n;i++)
	{
		ans += min(abs(c-s[i]),26 - abs(c-s[i]));
		c = s[i];
		
	}
	
	cout << ans;
	
	return 0;
}
