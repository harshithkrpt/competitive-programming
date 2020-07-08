#include<bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map<long long,int> hash;
	for(int i=0;i<4;i++)
	{
		long long num;
		cin >> num;
		hash[num]++;
	}
	int a = 4;
	a -= hash.size();
	cout << a;
	return 0;
} 
