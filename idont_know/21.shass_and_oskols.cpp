#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
		cin >> a[i];
	int m;
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin >> x >> y;
		
		int temp = a[x];
		a[x] = 0;
		
		if(x - 1 > 0)
		{
			a[x-1] += (y - 1);  
		}
		
		if(x + 1 <= n)
		{
			a[x+1] += (temp - y);
		}
	}
	
	
	for(int i=1;i<=n;i++)
	{
		cout << a[i] << "\n";
	}
	
	return 0;	
}
