#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	cout << abs(a[0] - a[1]) << " " << abs(a[0]-a[n-1]) << "\n"; 
	for(int i=1;i<n-1;i++)
	{
		cout << min(abs(a[i]-a[i+1]),abs(a[i-1]-a[i]));
		cout << " ";
		cout << max(abs(a[i]-a[n-1]),abs(a[i]-a[0]));
		cout << "\n";
	}
	
	cout << abs(a[n-1] - a[n-2]) << " " << abs(a[n-1]-a[0]) << "\n";
	
	return 0;
}
