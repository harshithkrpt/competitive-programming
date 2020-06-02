#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    cin >> num;
    long long int arr[num];

    for (long long int i = 0; i < num; i++)
        cin >> arr[i];

    sort(arr, arr + num);
    long long int max = -1;

    for (long long int i = 0; i < num; i++)
    {
        long long int temp = arr[i] * (num - i);
        if (temp > max)
        {
            max = temp;
        }
    }

    cout << max << endl;
    return 0;
}
