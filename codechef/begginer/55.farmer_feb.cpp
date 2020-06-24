// POTATOES
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 5000

void solve(vector<bool> is_prime)
{
    int x, y;
    cin >> x >> y;
    int n = 1;

    while (true)
    {
        if (is_prime[x + y + n] == true)
        {
            break;
        }
        else
        {
            n++;
        }
    }
    cout << n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<bool> is_prime(N + 1, true);

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(is_prime);
        cout << "\n";
    }
    return 0;
}