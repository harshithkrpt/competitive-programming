#include<bits/stdc++.h>
using namespace std;

/*
 *  Formula 
 * 	
 * i. Optimal Substructure
 * c(n,k) = c(n-1,k-1) + c(n-1,k)
 * c(n,n) = 1 and c(n,0) = 1
 * 
 * ii. Overlapping Subproblems
 * 		There are Many Subproblems we are recalculating 
 * 
 * */



int binCoeffRec(int n,int k)
{
	if(k == 0 || k == n)
		return 1;
	return binCoeffRec(n-1,k-1) + binCoeffRec(n-1,k);
}

// O(n * k)
int binCoeffDynamic(int n,int k)
{
	int C[n+1][k+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j == 0 || j == i)
				C[i][j] = 1;
			else 
				C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	
	return C[n][k];
}

// Space Optimized Version
/*	
 * 	n = 5 k = 2
 * 	
 * 	0 0 0 => C[k+1] {0}
 *  1 1 0
 *  1 2 1
 *  1 3 3
 *  1 4 6
 *  1 5 10      
 * */

int sobinDP(int n,int k)
{
	int C[k+1];
	memset(C,0,sizeof(C));
	
	C[0] = 1;
	
	for(int i=1;i<=n;i++){
	for(int j=min(i,k);j>0;j--)
		C[j] = C[j] + C[j-1];
	for(int j=0;j<=k;j++)
		  cout << C[j] << " ";
		cout << "\n";
	}
		
	return C[k];
}

int main()
{
	int n = 5,k = 2;
	//cout << binCoeffRec(n,k);
	//cout << binCoeffDynamic(n,k);
	cout << sobinDP(n,k);
	return 0;
}
