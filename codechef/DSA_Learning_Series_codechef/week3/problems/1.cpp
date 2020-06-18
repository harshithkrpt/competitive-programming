// SAVKONO
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, z;
    cin >> n >> z;
    priority_queue<ll> pq;
    ll temp;
    ll count = 0;
    while (n--)
    {
        cin >> temp;
        pq.push(temp);
    }

    while (!pq.empty() && z > 0)
    {
        temp = pq.top();
        z -= temp;
        count++;
        pq.pop();

        temp = temp / 2;
        if (temp > 0)
            pq.push(temp);
    }

    if (z <= 0)
    {
        cout << count;
    }
    else
    {
        cout << "Evacuate";
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