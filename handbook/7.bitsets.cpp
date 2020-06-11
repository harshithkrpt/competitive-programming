#include <bits/stdc++.h>

using namespace std;

int main()
{
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> s2(string("0010011010"));
    cout << s2[4] << endl;
    cout << s2[5] << endl;

    // count returns no of ones in bitset

    cout << s2.count();

    return 0;
}