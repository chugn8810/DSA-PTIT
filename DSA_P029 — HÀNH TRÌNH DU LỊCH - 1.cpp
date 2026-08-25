#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        vector<vector<int>> matran(m, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matran[i][j];
            }
        }
        int trangthai = 1 << m;
        vector<vector<int>> dp(trangthai, vector<int>(m, 1e9));
        for (int i = 0; i < m; i++)
        {
            dp[1 << i][i] = 0;
        }
        for (int i = 0; i < trangthai; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!(i & 1 << j) || dp[i][j] == 1e9)
                {
                    continue;
                }
                for (int v = 0; v < m; v++)
                {
                    if (!(i & 1 << v))
                    {
                        int next = i | (1 << v);
                        dp[next][v] = min(dp[next][v], dp[i][j] + matran[j][v]);
                    }
                }
            }
        }
        int ans = 1e9;
        for (int i = 0; i < m; i++)
        {
            ans = min(ans, dp[trangthai - 1][i]);
        }
        cout << ans << "\n";
    }
}
