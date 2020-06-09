// CHFQUEUE

/* 
        n chefs
        k seniority levels
        ai to an => seniority values
        ai => end of queue
        an => front of queue
        
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define deb(n) cout << #n << ' ' << n << endl;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    stack<int> stk;
    long long sp = 1e9 + 7;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Step 1 :
    for (int i = 0; i < n; i++)
    {
        if (stk.empty() || arr[stk.top()] < arr[i])
        {
            stk.push(i);
        }
        else
        {
            while (arr[stk.top()] > arr[i])
            {
                ans = ans * (i - stk.top() + 1);
                ans %= sp;
                stk.pop();
                if (stk.empty())
                {
                    break;
                }
            }
            stk.push(i);
        }
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

    solve();

    return 0;
}