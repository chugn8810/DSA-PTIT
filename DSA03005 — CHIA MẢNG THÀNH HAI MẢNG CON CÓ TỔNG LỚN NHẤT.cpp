#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<long long> c(m);
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        long long nua1 = min(n, m - n), sum1 = 0, sum2 = 0;
        for (int i = 0; i < nua1; i++)
        {
            sum1 += c[i];
        }
        for (int i = nua1; i < m; i++)
        {
            sum2 += c[i];
        }
        cout << sum2 - sum1 << endl;
    }
}
