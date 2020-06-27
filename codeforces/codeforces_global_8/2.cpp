#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str = "codeforces";
    ll k;
    cin >> k;
    int hash[11];

    for (int i = 0; i < 11; i++)
    {
        hash[i] = 1;
    }
    long long int prod = 1;
    while (prod < k)
    {
        for (int i = 0; i < 10; i++)
        {
            hash[i]++;
            prod = prod / (hash[i] - 1);
            prod = prod * hash[i];

            if (prod >= k)
            {
                break;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        while (hash[i]--)
        {
            cout << str[i];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    cout << "\n";

    return 0;
}