#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
long long a[93];
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> a(m);
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = n; j >= a[i]; j--)
            {
                if (dp[j - a[i]])
                {
                    dp[j] = true;
                }
            }
        }
        if (dp[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
