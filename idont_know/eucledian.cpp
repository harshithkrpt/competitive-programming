/*
 * 	GCD : Euclid
 * 
 * 	If We Keep on decreasing the largest of two numbers 
 * 	Gcd does not change we get gcd
 * 	
 * 	Or if we divide smaller number the algo stops when remainder 0
 * */

#include<bits/stdc++.h>
using namespace std;

// O(Log(min(a,b)))
int gcd(int a,int b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}


// Extended Euclidean Algorithm
/*
 * 	ax + by = gcd(a,b)
 * 	
 * 	a = 30 , b = 20
 * 	
 * 
 * */
int gcdExtended(int a,int b,int *x,int *y)
{
	if(a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}
	
	int x1,y1;
	int gcd = gcdExtended(b%a,a,&x1,&y1);
	
	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	int x,y;
	cout << gcd(10,5);
	cout << gcdExtended(10,5,&x,&y);
	cout << x << y;
	return 0;
}
