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

        vector<vector<int>> a(m, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int trangthai = 1 << m;
        vector<long long> dp(trangthai, -1e18);
        dp[0] = 0;
        for (int i = 0; i < trangthai; i++)
        {
            if (dp[i] == -1e18)
                continue;
            int row = bitset<20>(i).count();
            if (row >= m)
                continue;
            for (int j = 0; j < m; j++)
            {
                if (!(i & (1 << j)))
                {
                    int next = i | (1 << j);
                    dp[next] = max(dp[next], dp[i] + a[row][j]);
                }
            }
        }
        cout << dp[trangthai - 1] << "\n";
    }
}
