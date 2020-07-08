#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int ss = 0,l = 0;
	for(int i=0;i<n;i++)
	{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				ss++;
			}
			else
			{
				l++;
			}
	}
	
	if(ss >= l)
	{
		for(int i=0;i<n;i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	
	cout << s;
	return 0;
}
