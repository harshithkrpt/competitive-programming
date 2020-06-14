#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    //     he elements in a C++ priority queue are sorted in decreasing
    // order
    cout << q.top() << '\n';
    q.pop();
    cout << q.top() << '\n';

    // min priority queue
    priority_queue<int, vector<int>, greater<int>> q1;

    q1.push(3);
    q1.push(5);
    q1.push(7);

    cout << q1.top() << '\n';
    q1.pop();
    cout << q1.top() << '\n';

    return 0;
}