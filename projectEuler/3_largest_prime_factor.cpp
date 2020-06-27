// The Prime Factors of 13195 are 5 7 13 29
// large prime factor of the number 600851475143
#include<bits/stdc++.h>

using namespace std;

void primeFactors(long long int n)
{
	while(n % 2 == 0)
	{
		cout << 2 << " ";
		n = n / 2;
	}

	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n % i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
	}

	if(n > 2)
		cout <<	n << " ";
}

int main()
{
	long long n = 27;
	primeFactors(n);
	return 0;
}
