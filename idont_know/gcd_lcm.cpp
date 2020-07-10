/*
 *  lcm(a,b) = a * b / gcd(a,b)
 * */

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(a == 0)
	return b;
	return gcd(b % a, a);
}

int lcm(int a,int b)
{
	return (a * b) / gcd(a,b);
}

int main()
{
	cout << gcd(15,20);
	cout << lcm(15,20);
	return 0;
}
