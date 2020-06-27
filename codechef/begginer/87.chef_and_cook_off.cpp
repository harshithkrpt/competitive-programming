// CCOOK
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            if (num == 1)
                cnt++;
        }

        if (cnt == 0)
        {
            cout << "Beginner\n";
        }
        else if (cnt == 1)
        {
            cout << "Junior Developer\n";
        }
        else if (cnt == 2)
        {
            cout << "Middle Developer\n";
        }
        else if (cnt == 3)
        {
            cout << "Senior Developer\n";
        }
        else if (cnt == 4)
        {
            cout << "Hacker\n";
        }
        else
        {
            cout << "Jeff Dean\n";
        }
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

    solve();

    return 0;
}