#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m;
        vector<long long> a(m), b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        long long res = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long>());
        for (int i = 0; i < m; i++)
        {
            res += (a[i] * b[i]);
        }
        cout << res << endl;
    }
}
