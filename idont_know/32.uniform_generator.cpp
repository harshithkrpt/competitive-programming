#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(b == 0) return a;
	return gcd(b,a%b);
}

int main()
{
	int nu,num;
	while(cin >> nu >> num)
	{
		if(gcd(nu,num) == 1) cout << "\nGood Choice";
		else cout << "\nBad Choice";
	}
	return 0;
}
