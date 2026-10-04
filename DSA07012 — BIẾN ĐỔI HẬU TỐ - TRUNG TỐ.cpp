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
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                string tmp;
                tmp += s[i];
                st.push(tmp);
            }
            else
            {
                string tmp;
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                tmp = '(' + b + s[i] + a + ')';
                st.push(tmp);
            }
        }
        string res = st.top();
        cout << res << endl;
    }
}
