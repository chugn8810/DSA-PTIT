#include <bits/stdc++.h>
using namespace std;
int dp[10][105], MOD = 1e9 + 7;
void xuly()
{
    for (int i = 0; i <= 9; i++)
    {
        dp[i][1] = 1;
    }
    for (int j = 0; j <= 100; j++)
    {
        for (int i = 0; i <= 9; i++)
        {
            for (int k = i; k <= 9; k++)
            {
                dp[i][j] = (dp[i][j] + dp[k][j - 1]) % MOD;
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
        for (int i = 0; i <= 9; ++i)
        {
            total = (total + dp[i][n]) % MOD;
        }
        cout << total << "\n";
    }
}
