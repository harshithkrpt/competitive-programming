#include <iostream>

using namespace std;

#define PRIME 1000000007

long long int binary_exp(long long int x, long long int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
    {
        return x % PRIME;
    }
    else
    {
        long long int temp = binary_exp(x, n / 2);

        temp = (temp * temp) % PRIME;

        if (n % 2 == 0)
            return temp;
        else
            return ((x % PRIME) * temp) % PRIME;
    }
}

int main()
{
    cout << binary_exp(2, 10);
    return 0;
}