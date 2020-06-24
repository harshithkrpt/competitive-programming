// VOWELTB
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char c;
    cin >> c;
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}