#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                string tmp;
                tmp += s[i];
                st.push(tmp);
            }
            else
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string tmp = s[i] + b + a;
                st.push(tmp);
            }
        }
        if (st.size() != 1)
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string tmp = b + a;
            st.push(tmp);
        }
        cout << st.top() << endl;
    }
}
