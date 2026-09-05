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
        vector<long long> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long res = 0;
        int MOD = 1e9 + 7;
        for (int i = 0; i < m; i++)
        {
            long long tmp = ((a[i] % MOD) * (i % MOD)) % MOD;
            res = (res + tmp) % MOD;
        }
        cout << res << endl;
    }
}
