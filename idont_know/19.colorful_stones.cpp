#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	
	int ans = 0;
	int n = s2.size();
	for(int i=0;i<n;i++)
	{
		if(s1[ans] == s2[i])
		{
			ans++;
		}
	}
	
	cout << ans + 1;
	
	return 0;
}
