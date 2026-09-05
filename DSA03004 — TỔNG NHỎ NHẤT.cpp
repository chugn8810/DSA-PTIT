#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<long long> c(m);
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        long long a = 0, b = 0;
        for (int i = 0; i < m; i += 2)
        {
            a = a * 10 + c[i];
        }
        for (int i = 1; i < m; i += 2)
        {
            b = b * 10 + c[i];
        }
        cout << a + b << endl;
    }
}
