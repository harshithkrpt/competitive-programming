#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	
	char a = 'a';
	
	int t = 0;
	for(int i=0;i<n;i++)
	{
		cout << (char)(a + t);
		t++;
		if(t == k) t = 0;
	}
	
	return 0;
}
