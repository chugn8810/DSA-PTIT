#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> luu(n);
        for (int i = 0; i < n; i++)
        {
            cin >> luu[i];
        }
        stack<long long> st;
        for (int i = 0; i < n; i++)
        {
            if (luu[i] != "+" && luu[i] != "-" && luu[i] != "*" && luu[i] != "/")
            {
                long long so = stoll(luu[i]);
                st.push(so);
            }
            else
            {
                long long b = st.top();
                st.pop();
                long long a = st.top();
                st.pop();
                long long tmp;
                if (luu[i] == "+")
                {
                    tmp = a + b;
                }
                else if (luu[i] == "-")
                {
                    tmp = a - b;
                }
                else if (luu[i] == "*")
                {
                    tmp = a * b;
                }
                else if (luu[i] == "/")
                {

                    tmp = a / b;
                }
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}
