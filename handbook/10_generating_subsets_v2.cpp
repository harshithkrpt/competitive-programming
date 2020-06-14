#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int b = 0; b < (1 << n); b++) // loop runs 2^n - 1 times
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            cout << "------------------" << '\n';
            cout << "#b: " << b << " #n: " << n << " #i : " << i << " #b & (1 << i) : " << (b & (1 << i)) << '\n';
            cout << "------------------"
                 << "\n\n";
            if (b & (1 << i))

                subset.push_back(i);
        }
        for (auto x : subset)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}