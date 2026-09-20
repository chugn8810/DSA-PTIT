#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, res = 0;
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n)), dp(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1 && (i != 0 && j != 0))
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                else if (a[i][j] == 1 && (i == 0 || j == 0))
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
                res = max(dp[i][j], res);
            }
        }
        cout << res << endl;
    }
}
