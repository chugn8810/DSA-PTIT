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
        string s;
        cin >> s;
        stack<int> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isalnum(s[i]))
            {
                st.push(s[i] - '0');
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int tmp;
                if (s[i] == '+')
                {
                    tmp = a + b;
                }
                else if (s[i] == '-')
                {
                    tmp = a - b;
                }
                else if (s[i] == '/')
                {
                    tmp = a / b;
                }
                else if (s[i] == '*')
                {
                    tmp = a * b;
                }
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}
