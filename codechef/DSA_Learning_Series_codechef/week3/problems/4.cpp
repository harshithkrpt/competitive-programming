//FENCE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int N,M,K;
	cin >> N >> M >> K;
	map<int,map<int,int>> A;
	int ans = 0;
	int dx[] = {1,0,-1,0};
	int dy[] = {0,1,0,-1};
	while(K--)
	{
		int x,y;
		cin >> x >> y;
		for(int i=0;i<4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			ans += A[nx][ny] ? -1 : 1;
		}
		A[x][y] = 1;
	}

	cout << ans;
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
