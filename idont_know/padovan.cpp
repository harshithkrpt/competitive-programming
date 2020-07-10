#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	/*
	int n;
	cin >> n;
	vector<int> a(n+3);
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	for(int i=3;i<=n;i++)
	{
		a[i] = a[i-2] + a[i-3];
	}
	
	cout << a[n];
	*/
	
	int n;
	cin >> n;
	int pprepre = 1,ppre = 1,pcur = 1,pnext = 1;
	
	for(int i=3;i<=n;i++)
	{
		pnext = ppre + pprepre;
		pprepre = ppre;
		ppre = pcur;
		pcur = pnext;
	}
	
	cout << pnext;
	
	return 0;
}
