#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	vector<int> arr;
	
	
	for(int i=0;i<n;i++)
	{
		if(arr.size() == 0)
		{
			arr.push_back(s[i]);
		}
		else if(arr[arr.size()-1] != s[i])
		{
			arr.push_back(s[i]);
		}
	}
	
	
	int ans = n - arr.size();
	
	
	cout << ans;
	
	return 0;
}
