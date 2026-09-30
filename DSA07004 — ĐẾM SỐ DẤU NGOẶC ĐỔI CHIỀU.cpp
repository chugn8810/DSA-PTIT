#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(')');
            }
        }
        int l = 0, r = 0;
        while (!st.empty())
        {
            if (st.top() == '(')
                l++;
            else
                r++;
            st.pop();
        }
        int total = ceil(l / 2.0) + ceil(r / 2.0);
        cout << total << endl;
    }
}
