// ZCO12001
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int length;
    cin >> length;

    // Greedy
    int nesting_depth = 0;
    int first_position_nesting_depth = 0;
    int length_max_seq = 0;
    int first_position_max_seq = 0;

    stack<int> stk;

    // Temporary
    int temp_length = 0;
    int temp_first_position_max_seq = 0;
    int temp_nested_depth = 0;
    for (int i = 1; i <= length; i++)
    {
        int num;
        cin >> num;
        temp_length++;
        if (num == 1)
        {
            if (stk.empty())
            {
                temp_first_position_max_seq = i;
            }
            stk.push(1);
        }
        else
        {
            if (stk.size() > nesting_depth)
            {
                nesting_depth = stk.size();
                first_position_nesting_depth = i - 1;
            }
            stk.pop();
            if (stk.empty())
            {
                if (temp_length > length_max_seq)
                {
                    length_max_seq = temp_length;
                    first_position_max_seq = temp_first_position_max_seq;
                }
                temp_length = 0;
            }
        }
    }

    cout << nesting_depth << ' ' << first_position_nesting_depth << ' ' << length_max_seq << ' ' << first_position_max_seq << '\n';

    return 0;
}