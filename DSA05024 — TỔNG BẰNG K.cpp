#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n, k, MOD = 1e9 + 7;
        cin >> n >> k;
        vector<int> a(n), dp(k + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        dp[0] = 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i - a[j] >= 0)
                {

                    dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
                }
            }
        }

        cout << dp[k] << endl;
    }
}
