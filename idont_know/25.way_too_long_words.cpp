#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		int nn = s.size();
		if(nn <= 10)
		{
			cout << s << "\n";
		}
		else
		{	
			cout << s[0] <<nn-2<< s[nn-1] << "\n";
		}
	}
	
	return 0;
}
