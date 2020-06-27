// EURON
/*
 *	Every Set of number is ascending order
 *		a smaller no comes infront of a larger number which
 *		violates the condition
 *		
 *								
 * */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(int arr[],int l,int m,int r)
{
    long long count = 0;
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2]; 
    for (int i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for (int j = 0; j < n2; j++) 
        right[j] = arr[m + 1 + j]; 

    int i = 0, j = 0;
    int k = l;

    while (i < n1 || j < n2) {
    	//Loop till all elements in both subarrays are taken
        if (i == n1) {
            arr[k] = right[j];
            j++; //Left subarray was fully traversed
        } else if (j == n2) {
            arr[k] = left[i];
            i++; //Right subarray was fully traversed
        } else if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++; //Left element is less than Right element
            //Hence, no inversion. No count increment.               
        } else {
            arr[k] = right[j];
            count += n1-i;
            //Increment count with the number of inversions
            j++;
        }
        k++;
    }
    return count;
}

ll mm(int arr[],int l,int r)
{
	if(l < r) {
		int m = l + (r - l) / 2;
		return mm(arr,l,m) + mm(arr,m+1,r) + merge(arr,l,m,r);
	}
	else
		return 0;
}


void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	cout << mm(arr,0,n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
        solve();
	cout << "\n";
    return 0;
}
