#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int best = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }

    cout << "Best : " << best;
    return 0;
}

// README Kadane's Algorithm

/* 


    HENCE KADANES ALGORITHM PERFORMS 

    INIT { SUM = 0 AND BEST = 0 }

    ITERATE THROUGH THE LOOP:
        SUM = MAX(ARR[I],ARR[I]+SUM) // SUM TRACKS GLOBAL SUM 
        
        BEST = MAX(BEST,SUM)  // BEST TRACKS LOCAL BEST 
    
    Example  : 
    

    -1 2 4 -3 5 2 -5 2

    sum = 0
    best = 0

    sum = max(-1,0-1)
    best = max(0,-1)  // -1 is eliminated

    sum = max(2,2-1) 
    best = max(0,2) // best becomes 2

    sum = max(4,2+4)
    best = max(2,6) // best becomes 6

    sum = max(-3,6-3)
    best = max(6,3) // -3 is eliminated

    sum = max(3,3+5)
    best = max(6,8) 

    sum = max(8,10)
    best = max(8,10) // best becomes 10

    sum = max(-5,10-5)
    best = max(10,5) // stays 10

    sum = max(2,5+2)  
    best = max(7,10) 

    if 2 is 4 then we take it because the best becomes 11 so we ignore the sum and print the best value is 10



 */
