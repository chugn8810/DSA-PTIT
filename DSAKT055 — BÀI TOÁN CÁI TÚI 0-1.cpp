#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, n;
        cin >> n >> c;
        vector<int> a(n), w(n), dp(c + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            vector<int> tmp_dp = dp;
            for (int j = w[i]; j <= c; j++)
            {
                tmp_dp[j] = max(tmp_dp[j], dp[j - w[i]] + a[i]);
            }
            dp = tmp_dp;
        }
        cout << dp[c] << endl;
    }
}
