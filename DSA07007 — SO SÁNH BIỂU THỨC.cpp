#include <bits/stdc++.h>
using namespace std;
string xoa(string &s)
{
    string res;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            int tmp = st.top();
            st.pop();
            if (tmp - 1 >= 0 && s[tmp - 1] == '-')
            {
                for (int j = tmp + 1; j < i; j++)
                {
                    if (s[j] == '-')
                        s[j] = '+';
                    else if (s[j] == '+')
                        s[j] = '-';
                }
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '(' && s[i] != ')')
            res += s[i];
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string ss1 = xoa(s1);
        string ss2 = xoa(s2);
        if (ss1 == ss2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
