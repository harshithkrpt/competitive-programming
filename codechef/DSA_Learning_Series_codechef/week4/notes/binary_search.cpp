#include <bits/stdc++.h>

using namespace std;

void binary_search(int arr[], int val, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == val)
        {
            cout << "Found : " << val << "at " << mid;
            break;
        }
        else if (arr[mid] > val)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

int main()
{
    int el;
    int arr[] = {1, 2, 4, 5, 6};
    cin >> el;
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]);
    binary_search(arr, el, low, high - 1);
    return 0;
}