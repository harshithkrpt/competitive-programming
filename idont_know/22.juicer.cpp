#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,b,d;
	cin >> n >> b >> d;
	int ans = 0;
	int td = 0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(num <= b)
		{
			td += num;
			if(td > d)
			{
				ans++;
				td = 0;
			}
		}
	}
	
	
	cout << ans;
	
	return 0;	
}
