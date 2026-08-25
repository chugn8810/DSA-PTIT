#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    stack<int> st;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int t;
            cin >> t;
            st.push(t);
        }
        else if (s == "PRINT")
        {
            if (st.empty())
            {
                cout << "NONE\n";
                continue;
            }
            cout << st.top() << endl;
        }
        else if (s == "POP")
        {
            if (!st.empty())
                st.pop();
        }
    }
}
