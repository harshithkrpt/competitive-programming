// MEDIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// TODO ACTUAL APPROACH
void solve()
{
    string str;
    cin >> str;

    int year = 0;
    int month = 0;
    int date = 0;

    for (int i = 0; i < 4; i++)
    {
        year *= 10;
        year += abs(48 - (int)str[i]);
    }

    for (int i = 5; i < 7; i++)
    {
        month *= 10;
        month += abs(48 - (int)str[i]);
    }

    for (int i = 8; i < 10; i++)
    {
        date *= 10;
        date += abs(48 - (int)str[i]);
    }

    int dcmw[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        dcmw[1] = 29;
    }

    int count = 0;
    int flag = 1; //default odd

    if (date % 2 == 0)
    {
        flag = 0; // even
    }
    count++;

    while (true)
    {
        date = date + 2;
        flag = flag + 2;

        if (date > dcmw[month - 1])
        {
            date = date - dcmw[month - 1];
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    dcmw[1] = 29;
                }
                else
                {
                    dcmw[1] = 28;
                }
            }
        }

        if (date % 2 == flag % 2)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
