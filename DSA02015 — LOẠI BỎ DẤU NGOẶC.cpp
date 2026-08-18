#include <bits/stdc++.h>
using namespace std;
int maxx = 0;
set<string> st;
bool check(string s)
{
    if (s.size() == 1 || s.size() == 0)
    {
        return false;
    }
    stack<char> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            t.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (t.empty())
                return false;
            else
                t.pop();
        }
    }
    if (t.empty())
        return true;
    else
        return false;
}
void quaylui(string s, int ind)
{
    if (s.size() < maxx)
    {
        return;
    }
    if (check(s))
    {
        if (s.size() > maxx)
        {
            maxx = s.size();
            st.clear();
        }
        st.insert(s);
    }
    for (int i = ind; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == ')')
        {
            string tmp = s;
            tmp.erase(i, 1);
            quaylui(tmp, i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        st.clear();
        maxx = 0;
        string s;
        cin >> s;
        quaylui(s, 0);
        if (st.empty())
        {
            cout << -1;
        }
        else
        {
            for (auto it : st)
            {
                cout << it << " ";
            }
        }
        cout << endl;
    }
}
