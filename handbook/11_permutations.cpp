#include<bits/stdc++.h>
#define n 3
using namespace std;

vector<int> permutation;

bool chosen[n];

void search()
{
	if(permutation.size() == n)
	{
		for(auto x:permutation) cout << x << ' ';
		cout << endl;	
	}
	else {
		for(int i=0;i<n;i++)
		{
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main()
{
	search();
	return 0;
}
