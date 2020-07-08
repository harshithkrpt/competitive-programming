#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(num == 1)
		a.push_back(i);
		else
		if(num == 2)
		b.push_back(i);
		else
		c.push_back(i);
	}
	
	int p = min(a.size(),min(b.size(),c.size()));
	
	if(p == 0)
	{
		cout << 0;
	}
	else
	{
		cout << p << "\n";
		for(int i=0,j=0,k=0;i<p;i++,j++,k++)
		{
			cout << a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << "\n";
		}
	}
	
	return 0;
}
