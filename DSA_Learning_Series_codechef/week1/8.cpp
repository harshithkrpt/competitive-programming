// Problem Code LADDU
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void solve()
{
    int activities;
    string origin;
    cin >> activities;
    cin >> origin;
    int points = 0;
    for (int i = 0; i < activities; i++)
    {
        string name_activity;
        cin >> name_activity;
        if (name_activity == "CONTEST_WON")
        {
            int rank;
            cin >> rank;
            points += 300;
            if (rank < 20)
            {
                points += (20 - rank);
            }
        }
        else if (name_activity == "TOP_CONTRIBUTOR")
        {
            points += 300;
        }
        else if (name_activity == "BUG_FOUND")
        {
            int severity;
            cin >> severity;
            points += severity;
        }
        else
        {
            points += 50;
        }
    }
    if (origin == "INDIAN")
    {
        cout << points / 200;
    }
    else
    {
        cout << points / 400;
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