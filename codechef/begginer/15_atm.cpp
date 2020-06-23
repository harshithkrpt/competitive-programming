// HS08TEST
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double amount;
	cin >> amount;
	if(n % 5 != 0 || amount < (n + 0.50))
	{
		printf("%.2lf",amount);
		return 0;
	}
	
	printf("%.2lf",(amount-n-0.50));

	return 0;
}
