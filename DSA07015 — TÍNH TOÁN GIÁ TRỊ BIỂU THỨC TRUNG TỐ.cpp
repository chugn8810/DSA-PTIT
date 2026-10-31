#include <bits/stdc++.h>
using namespace std;
int uutien(char n)
{
    if (n == '*' || n == '/')
        return 2;
    if (n == '+' || n == '-')
        return 1;
    return 0;
}
long long thuchien(char n, long long a, long long b)
{
    if (n == '-')
    {
        return a - b;
    }
    else if (n == '+')
    {
        return a + b;
    }
    else if (n == '*')
    {
        return a * b;
    }
    return a / b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<long long> so;
        stack<char> st;
        int i = 0;
        while (i < s.size())
        {
            if (isdigit(s[i]))
            {
                long long tmp = s[i] - '0';
                while (i + 1 < s.size() && isdigit(s[i + 1]))
                {
                    i++;
                    tmp = tmp * 10 + s[i] - '0';
                }
                i++;
                so.push(tmp);
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
                i++;
            }
            else if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    long long b = so.top();
                    so.pop();
                    long long a = so.top();
                    so.pop();
                    char n = st.top();
                    st.pop();
                    long long tmp = thuchien(n, a, b);
                    so.push(tmp);
                }
                st.pop();
                i++;
            }
            else
            {
                while (!st.empty() && uutien(st.top()) >= uutien(s[i]))
                {
                    long long b = so.top();
                    so.pop();
                    long long a = so.top();
                    so.pop();
                    char n = st.top();
                    st.pop();
                    long long tmp = thuchien(n, a, b);
                    so.push(tmp);
                }
                st.push(s[i]);
                i++;
            }
        }
        while (!st.empty())
        {
            long long b = so.top();
            so.pop();
            long long a = so.top();
            so.pop();
            char n = st.top();
            st.pop();
            long long tmp = thuchien(n, a, b);
            so.push(tmp);
        }
        cout << so.top() << endl;
    }
}
