/* 
 *      Even Fibonacci numbers
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long first = 1;
    long long second = 2;
    long long sum = 2;
    long long temp;
    while (first + second < 4000000)
    {
        temp = first + second;
        if (temp % 2 == 0)
        {
            sum += temp;
        }
        first = second;
        second = temp;
    }

    cout << "\n"
         << sum;
    return 0;
}