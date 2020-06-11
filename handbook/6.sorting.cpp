#include <bits/stdc++.h>

using namespace std;

struct P
{
    int x, y;
    bool operator<(const P &p)
    {
        if (x != p.x)
            return x < p.x;
        else
            return y < p.y;
    }
};

// This Comp Functions sorts accordingly first : size and second: alphebetically

bool comp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main()
{
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end());

    cout << "Increasing  : ";
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;

    sort(v.rbegin(), v.rend());

    cout << "Decreasing  : ";
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;

    int n = 7;

    // Sorting the ordinary array

    int a[] = {4, 2, 5, 3, 5, 8, 3};

    sort(a, a + n);

    // Sorting the string

    string s = "monkey";
    sort(s.begin(), s.end());

    cout << "Increasing  : ";
    for (auto x : s)
    {
        cout << x << ' ';
    }
    cout << endl;

    sort(s.rbegin(), s.rend());

    cout << "Decreasing  : ";
    for (auto x : s)
    {
        cout << x << ' ';
    }
    cout << endl;

    // Comparision Operators

    vector<pair<int, int>> v1;
    v1.push_back({1, 5});
    v1.push_back({2, 3});
    v1.push_back({1, 2});
    sort(v1.begin(), v1.end());

    cout << "Increasing  : ";
    for (auto x : v1)
    {
        cout << x.first << ' ' << x.second << ' ';
    }
    cout << endl;

    sort(v1.rbegin(), v1.rend());

    cout << "Increasing  : ";
    for (auto x : v1)
    {
        cout << x.first << ' ' << x.second << ' ';
    }
    cout << endl;

    vector<tuple<int, int, int>> v2;
    v2.push_back({2, 1, 4});
    v2.push_back({1, 5, 3});
    v2.push_back({2, 1, 3});
    sort(v.begin(), v.end());

    // User Defined Structs donot have a comparator opetator

    // Vector of Strings
    vector<string> vs = {"harhi",
                         "sppe",
                         "apple",
                         "hhdzzzz"};

    sort(vs.begin(), vs.end(), comp);

    cout << "Increasing : ";
    for (auto x : vs)
    {
        cout << x << ' ';
    }

    
    return 0;
}