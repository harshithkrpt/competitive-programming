#include<bits/stdc++.h>
using namespace std;

int main()
{
	int y,w;
	cin >> y >> w;
	
	int a = max(y,w);
	a = 7 - a;
	if(a == 0)
	{
		cout << "0/1";
	}
	else if(a == 1)
	{
		cout << "1/6";
	}
	else if(a == 2)
	{
		cout << "1/3";
	}
	else if(a == 3)
	{
		cout << "1/2";
	}
	else if(a == 4)
	{
		cout << "2/3";
	}
	else if(a == 5)
	{
		cout << "5/6";
	}
	else 
	{
		cout << "1/1";
	}
	
	return 0;
}
