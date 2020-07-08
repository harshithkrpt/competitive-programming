#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	vector<int> a;
	int n = s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			a.push_back(s[i]-'0');
		}
	}
	
	sort(a.begin(),a.end());
	
	n = a.size();
	for(int i=0;i<n;i++)
	{
		cout << a[i];
		if(i != n-1) cout << "+";
	}
	return 0;
}
