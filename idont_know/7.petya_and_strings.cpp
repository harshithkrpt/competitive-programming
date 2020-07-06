#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	string b;
	cin >> a >> b;
	int n = a.size();

	for(int i=0;i<n;i++)
	{
		int num1 = a[i];
		int num2 = b[i];
		if(a[i] <= 96)
		{
			num1 = a[i] + 32;
		}
		
		if(b[i] <= 96)
		{
			num2 = b[i] + 32;
		}
		
		if(num1 > num2) {
			cout << 1;
			return 0;
		}
		
		if(num1 < num2) {
			cout << -1;
			return 0;
		}
	}
	
	cout << 0;
	return 0;
}
