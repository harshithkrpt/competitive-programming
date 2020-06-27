// URCALC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    double a, b;
    cin >> a >> b;
    char c;
    cin >> c;

    switch (c)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << fixed << setprecision(6) << a / b;
        break;
    default:
        break;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}