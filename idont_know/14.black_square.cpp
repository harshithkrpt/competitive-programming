#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr(5);
	int ans = 0;
	arr[0] = 0;
	for(int i=1;i<5;i++)
	{
		cin >> arr[i];
	}
	string s;
	cin >> s;
	int len = s.size();
	for(int i=0;i<len;i++)
	{
		ans += arr[s[i]-'0'];
	}
	
	cout << ans;
	
	return 0;
}
