#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m, p;
        cin >> m >> p;
        vector<vector<int>> a(m + 1, vector<int>(p + 1)), dp(m + 1, vector<int>(p + 1, 0));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= p; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= p; j++)
            {
                if (i == 1)
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                else if (j == 1)
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                else
                    dp[i][j] = min(dp[i - 1][j - 1] + a[i][j], min(dp[i - 1][j] + a[i][j], dp[i][j - 1] + a[i][j]));
            }
        }
        cout << dp[m][p] << endl;
    }
}
