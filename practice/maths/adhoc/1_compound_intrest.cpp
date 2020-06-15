/*  
 *  
 *      Compound Intrest :
 *          
 *          A  =   P (1 + r / 100)^t    
 * 
 *          A = final Amount
 *          P = initial principal balance
 *          r = interest rate
 *          n = number of times interest applied per time period
 *          t = number of time periods elapsed
 */

#include <bits/stdc++.h>

using namespace std;

double find(double p, double r, double t)
{
    return p * pow(1 + (r / 100), t);
}

int main()
{
    cout << find(200000, 2.0, 3);
    return 0;
}