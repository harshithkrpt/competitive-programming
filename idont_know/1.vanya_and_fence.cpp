#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,h;
	cin >> n >> h;
	
	int width = 0;
	
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(num <= h) width++;
		else width += 2;
	}
	
	cout << width;
}
