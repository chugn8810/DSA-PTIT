#include <bits/stdc++.h>
using namespace std;
int uutien(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, res;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                res += s[i];
            }
            else if (s[i] == '(')
            {
                st.push('(');
            }
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty())
                    st.pop();
            }
            else
            {
                while (!st.empty() && st.top() != '(' && uutien(st.top()) >= uutien(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty() && st.top() != '(')
        {
            res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}
