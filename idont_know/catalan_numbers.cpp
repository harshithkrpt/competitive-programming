#include<bits/stdc++.h>
using namespace std;

/*
 * 	C0 = 1
 * 	Cn+1 = sumof0-n(CiCn-i)
 * 
 * 	And Use Dynamic Programming
 * 
 * 	Binomial Coefficient Formula
 * 		Cn = 1 / n + 1 (2n n)
 * 
 * */
 
 
// Exponential 
int recursive(int n)
{
	if(n <= 1) return 1;

	int res = 0;
	for(int i=0;i<n;i++)
		res += recursive(i) * recursive(n-i-1);
	return res;
}

// Quadratic Complexity
int dp(int n)
{
	vector<int> a(n+1);
	
	a[0] = a[1] = 1;
	for(int i=2;i<=n;i++)
	{
		a[i] = 0;
		for(int j=0;j<i;j++)
			a[i] += a[j] * a[i - j - 1];
	}
	
	return a[n];
}


// Linear Using Binomial Coefficient
int bc(int n,int k)
{
	int res = 1;
	if(k > n - k)
		k = n - k;
	
	for(int i=0;i<k;i++)
	{
		res *= (n-i);
		res /= (i + 1);
	}
	
	return res;
}

int main()
{
	int n;
	cin >> n;
	cout << recursive(n) << "\n";
	cout << dp(n) << "\n";
	
	
	int cn = bc(2*n,n);
	
	cout << cn / (n + 1) << "\n";
	
	return 0;
}
