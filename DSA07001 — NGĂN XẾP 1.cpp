#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    string s;
    stack<int> st;
    while ((cin >> s))
    {
        if (s == "push")
        {
            int t;
            cin >> t;
            st.push(t);
        }
        else if (s == "show")
        {
            if (st.empty())
            {
                cout << "empty\n";
                continue;
            }
            vector<int> tmp;
            while (!st.empty())
            {
                tmp.push_back(st.top());
                st.pop();
            }
            reverse(tmp.begin(), tmp.end());
            for (int i = 0; i < tmp.size(); i++)
            {
                cout << tmp[i] << " ";
                st.push(tmp[i]);
            }
            cout << endl;
        }
        else if (s == "pop")
        {
            if (!st.empty())
                st.pop();
        }
    }
}
