// CODE LAPIN
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr[256] = {0};
        string s;
        cin >> s;
        int n = s.length();
        // Even
        if (n % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < n / 2)
                {
                    if (!arr[s[j]])
                    {
                        arr[s[j]] = 1;
                    }
                    else
                        arr[s[j]]++;
                }
                else
                {

                    arr[s[j]]--;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == (int)n / 2)
                {
                    continue;
                }
                else if (j < (int)n / 2)
                {
                    if (!arr[s[j]])
                    {
                        arr[s[j]] = 1;
                    }
                    else
                        arr[s[j]]++;
                }
                else
                {

                    arr[s[j]]--;
                }
            }
        }
        int flag = 0;

        for (int i = 0; i < 256; i++)
        {
            if (arr[i] != 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}