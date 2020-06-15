/* 
 *
 *        Birthday Paradox :
 *          
 *          src : https://www.geeksforgeeks.org/birthday-paradox/
 *              
 *        Applications :
 * 
 *          1) Birthday Paradox is generally discussed with hashing to
 *             show importance of collision handling even for a small set of keys.
 */

#include <bits/stdc++.h>

using namespace std;

int find(double p)
{
    return ceil(sqrt(2 * 365 * log(1 / (1 - p))));
}

int main()
{
    cout << find(0.5);
    return 0;
}