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
                cout << s[i];
        }
        cout << endl;
    }
}
