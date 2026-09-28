#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        vector<int> a(k), dp(n, -1);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        dp[0] = 0;
        for (int i = 0; i < k; i++)
        {
            vector<int> dp_tmp = dp;
            int tmp = a[i] % n;
            for (int j = 0; j < n; j++)
            {
                if (dp[j] != -1)
                {
                    int check = (tmp + j) % n;
                    dp_tmp[check] = max(dp_tmp[check], dp[j] + 1);
                }
            }
            dp = dp_tmp;
        }
        cout << dp[0] << endl;
    }
}
