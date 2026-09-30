#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(105, vector<int>(10));
int MOD = 1e9 + 7;
void xuly()
{
    for (int i = 0; i <= 9; i++)
    {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    xuly();
    while (t--)
    {
        int n;
        cin >> n;
        long long total = 0;
        for (int i = 0; i <= 9; i++)
        {
            total = (total + dp[n][i]) % MOD;
        }
        cout << total << endl;
    }
}
