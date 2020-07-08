#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	int o = 0;
	int t = 0;
	
	int i = 0;
	int j = n - 1;
	
	
	for(int k=0;k<n;k++)
	{
		if(k & 1)
		{
			int num = max(a[i],a[j]);
			if(num == a[i]) i++;
				else j--;
				t += num;
		}
		else
		{
			int num = max(a[i],a[j]);
			if(num == a[i]) i++;
			else j--;
			o += num;
		}
		
	}

	
	cout << o << " " << t;
	
	return 0;
}
