#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 3;
    vector<int> perm;
    for (int i = 0; i < n; i++)
    {
        perm.push_back(i);
    }
    do
    {
        for (int i = 0; i < n; i++)
            cout << perm[i] << ' ';
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));
    return 0;
}