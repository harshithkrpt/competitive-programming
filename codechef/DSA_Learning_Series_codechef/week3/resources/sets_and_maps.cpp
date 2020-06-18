#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 5, 6, 6, 7, 8, 9};
    // vector<int> V(arr, arr + 9);
    // cout << lower_bound(V.begin(), V.end(), 3) - V.begin();
    /* 
    Corner Case key is greater than the greatest value in the range it returns end iterator */
    // upper_bound strictly greater

    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    auto it = s.lower_bound(2);
    cout << "\nThe lower bound of key 2 is ";
    cout << (*it) << endl;

    it = s.lower_bound(3);
    cout << "\nThe lower bound of key 3 is ";
    cout << (*it) << endl;

    it = s.lower_bound(8);
    cout << "\nThe lower bound of key 8 is ";
    cout << (*it) << endl;

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    // points to next element after 2
    it = s.upper_bound(2);
    cout << "\nThe upper bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*it) << endl;

    return 0;
}