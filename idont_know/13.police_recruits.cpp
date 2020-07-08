#include<bits/stdc++.h>

using namespace std;

int main()
{
	int ans = 0;
	int pc = 0;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(num == -1)
		{
			if(pc > 0) {
				pc--;
			}
			else
				ans++;
		}
		else
		{
			pc += num;
		}
	}
	
	cout << ans;
	
	return 0;
}
