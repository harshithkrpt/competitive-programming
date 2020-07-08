#include<bits/stdc++.h>

using namespace std;

int main()
{
	char arr[256] = {0};
	string s;
	cin >> s;
	int ans = 0;
	int n = s.size();
	for(int i=0;i<n;i++)
		if(!arr[(int)s[i]]) {
			arr[(int)s[i]] = 1;
			ans++;
		}
		
	if(ans & 1)
	{
		cout << "IGNORE HIM!";
	}
	else
	{
		cout << "CHAT WITH HER!";
	}
	
	return 0;
}
