#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long x;
	cin >> x;
	int ds = 0;
	for(int i=0;i<n;i++)
	{
		char c;
		long t;
		cin >> c >> t;
		if(c == '+') x += t;
		else {
			if(x >= t)
			{
				x -= t;
			}
			else
			{
				ds++;
			}
		}
	}
	
	cout << x << " " << ds;
	
	return 0;
}
