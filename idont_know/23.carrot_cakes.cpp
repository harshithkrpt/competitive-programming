#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	
	int c = 0;
	while(c <= d)
	{
		n -= k;
		c += t;
	}
	
	if(n > 0)
		cout << "YES\n"; 
	else
		cout << "NO\n";
	return 0;
}
