// CODE  FLOW007

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num;
        int rev = 0;
        cin >> num;
        while (num > 0)
        {
            rev = rev * 10;
            rev = rev + (num % 10);
            num = num / 10;
        }
        cout << rev << endl;
    }
    return 0;
}