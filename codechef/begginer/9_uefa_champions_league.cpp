// UCL
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Team
{
public:
    string name;
    int points;
    int goal_difference;
    Team()
    {
    }
    Team(string n)
    {
        name = n;
        points = 0;
        goal_difference = 0;
    }
};

int comp(Team a, Team b)
{
    if (a.points != b.points)
    {
        return a.points > b.points;
    }
    return a.goal_difference > b.goal_difference;
}

void solve()
{
    unordered_map<string, pair<bool, int>> hash;
    vector<Team> teams(4);
    int index = 0;
    for (int i = 1; i <= 12; i++)
    {
        string t1, t2, t3;
        int g1, g2;
        cin >> t1 >> g1 >> t3 >> g2 >> t2;
        if (!hash[t1].first)
        {
            hash[t1].first = true;
            hash[t1].second = index;
            teams[index] = Team(t1);
            index++;
        }
        if (!hash[t2].first)
        {
            hash[t2].first = true;
            hash[t2].second = index;
            teams[index] = Team(t2);
            index++;
        }

        if (g1 > g2)
        {
            teams[hash[t1].second].points += 3;
            teams[hash[t1].second].goal_difference += g1 - g2;
            teams[hash[t2].second].goal_difference += g2 - g1;
        }
        else if (g1 < g2)
        {
            teams[hash[t2].second].points += 3;
            teams[hash[t2].second].goal_difference += g2 - g1;
            teams[hash[t1].second].goal_difference += g1 - g2;
        }
        else
        {
            teams[hash[t1].second].points += 1;
            teams[hash[t2].second].points += 1;
        }
    }

    sort(teams.begin(), teams.end(), comp);

    cout << teams[0].name << " " << teams[1].name;
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