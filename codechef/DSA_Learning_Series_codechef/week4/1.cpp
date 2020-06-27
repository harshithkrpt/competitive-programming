//STACKS
/*
 *	3 4 5 1 1 2
 *
 *	1 1 2
 *
 *	
 * */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	vector<ll> arr;
	ll max;
	cin >> max;
	ll stack_size = 1;
	arr.push_back(max);
	for(int i=1;i<n;i++)
	{
		ll num;
		cin >> num;
		if(num > max)
		{
			arr.push_back(num);
			stack_size++;
			max = num;
		}
		else
		{
			int i = upper_bound(arr.begin(),arr.end(),num)-arr.begin();
			if(i == arr.end()-arr.begin()){
				stack_size++;
				arr.push_back(num);
			}
			else
			arr[i] = num;
		}
	}

	cout << stack_size << " ";
	for(auto x: arr)
	{
		cout << x << " ";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
