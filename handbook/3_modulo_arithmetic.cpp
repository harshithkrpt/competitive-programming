#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 10^9 + 7 modulo
    /* 
        property of modulo

        (a + b) % m => (a % m + b % m) % m
        (a - b) % m => (a % m - b % m) % m
        (a . b) % m => (a % m - b % m) % m
     */
    int n;
    long long x = 1;
    int m = 1000000007;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        x = (x * i) % m;
    }

    /* 
remainder as usual and then add m if the result is negative:    
    x = x%m;
if (x < 0) x += m;
     */

    cout << x % m << "\n";

    return 0;
}