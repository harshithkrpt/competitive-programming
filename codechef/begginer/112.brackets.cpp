// BRACKETS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a;
    cin >> a;

    int m = INT_MIN;
    stack<char> st;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '(')
            st.push('(');

        if (a[i] == ')')
            st.pop();
        int sz = st.size();
        m = max(sz, m);
    }

    for (int i = 0; i < m; i++)
    {
        cout << "(";
    }

    for (int i = 0; i < m; i++)
    {
        cout << ")";
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