// INPSTFIX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;
}

void solve()
{
    int length;
    cin >> length;
    stack<char> stk;
    stk.push('N');
    for (int i = 0; i < length; i++)
    {
        char ch;
        cin >> ch;
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch;
        }
        else if (ch == '(')
        {
            stk.push('(');
        }
        else if (ch == ')')
        {
            while (stk.top() != '(' && stk.top() != 'N')
            {
                cout << stk.top();
                stk.pop();
            }
            if (stk.top() == '(')
                stk.pop();
        }
        else
        {
            while (stk.top() != 'N' && prec(ch) <= prec(stk.top()))
            {
                cout << stk.top();
                stk.pop();
            }
            stk.push(ch);
        }
    }
    while (stk.top() != 'N')
    {
        cout << stk.top();
        stk.pop();
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