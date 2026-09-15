#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int MOD = 1e9 + 7;
    while (m--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n * 9 || k == 0)
        {
            cout << 0 << endl;
            continue;
        }
        long long dp[n + 1][k + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= min(9, k); i++)
        {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                for (int d = 0; d <= min(9, j); d++)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - d]) % MOD;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
}
