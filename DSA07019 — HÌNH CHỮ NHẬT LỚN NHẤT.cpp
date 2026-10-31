#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        long long maxx = 0;
        cin >> m;
        vector<long long> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        stack<long long> st;
        for (int i = 0; i < m; i++)
        {
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                while (!st.empty() && a[st.top()] > a[i])
                {
                    long long tmp = st.top();
                    st.pop();
                    if (st.empty())
                    {
                        long long check = i * a[tmp];
                        maxx = max(maxx, check);
                    }
                    else
                    {
                        long long check = (i - st.top() - 1) * a[tmp];
                        maxx = max(maxx, check);
                    }
                }
                st.push(i);
            }
        }
        if (!st.empty())
        {
            while (!st.empty())
            {
                long long tmp = st.top();
                st.pop();
                if (st.empty())
                {
                    long long check = m * a[tmp];
                    maxx = max(maxx, check);
                }
                else
                {
                    long long check = (m - st.top() - 1) * a[tmp];
                    maxx = max(maxx, check);
                }
            }
        }
        cout << maxx << endl;
    }
}
