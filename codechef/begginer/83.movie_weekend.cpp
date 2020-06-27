// MOVIWWKN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int min_index = INT_MAX;
    int max_rating = INT_MIN;
    vector<int> movie(n);
    vector<int> index(n);

    for (int i = 0; i < n; i++)
    {
        cin >> index[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> movie[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (max < movie[i] * index[i])
        {
            max = movie[i] * index[i];
            min_index = i + 1;
            max_rating = movie[i];
        }
        else if (max == movie[i] * index[i])
        {
            if (movie[i] > max_rating)
            {
                min_index = i + 1;
                max_rating = movie[i];
            }
        }
    }

    cout << min_index;
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