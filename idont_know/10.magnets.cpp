#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int state = -1;
	int shift = 0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(state == -1)
		{
				state = num;
				shift++;
		}
		else if(state != num)
			{
				state = num;
				shift++;
			}
		
	}
	
	cout << shift;
	
	return 0;
}
