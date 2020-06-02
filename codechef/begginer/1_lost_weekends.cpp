// PROBLEM_CODE=LOSTWKND

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int limit = 24 * 5;
    int hours_to_work = 0;
    for (int i = 0; i < 5; i++)
    {
        int num{};
        cin >> num;
        hours_to_work += num;
    }

    int times{};
    cin >> times;
    hours_to_work *= times;

    if (hours_to_work <= limit)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
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