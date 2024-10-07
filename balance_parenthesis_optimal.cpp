// Code By Romijul Laskar
#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << #x << endl
#define d(x) cout << x << endl
using namespace std;
int main()
{
    unordered_map<char, int> mp = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (auto &value : s)
        {
            if (mp[value] < 0)
            {
                st.push(value);
            }
            else
            {
                if (st.empty())
                {
                    p(No);
                }
                if (mp[st.top()] + mp[value] == 0)
                {
                    st.pop();
                }
                else
                {
                    p(No);
                }
            }
        }
        if (!st.empty())
        {
            p(No);
        }
        else
        {
            p(Yes);
        }
    }
    return 0;
}