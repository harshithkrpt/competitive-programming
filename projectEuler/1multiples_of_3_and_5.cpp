/* 
 *  Multiples of 3 and 5
 *      If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <bits/stdc++.h>

using namespace std;

long long adhoc(long long num)
{
    long long sum = 0;
    for (long long i = 1; i < num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

long long sumDivisibleByN(long long target, long long n)
{
    long long p = target / n;
    return n * (p * (p + 1)) / 2;
}

// Efficient
long long maths(long long num)
{
    return sumDivisibleByN(num, 3) + sumDivisibleByN(num, 5) - sumDivisibleByN(num, 15);
}

int main()
{

    cout << "\nBruteforce : " << adhoc(1000000000);
    cout << "\nEfficient : " << maths(1000000000);
    return 0;
}