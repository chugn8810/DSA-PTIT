#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, n;
    cin >> c >> n;
    vector<int> a(n), dp(c + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp_dp = dp;
        for (int j = a[i]; j <= c; j++)
        {
            tmp_dp[j] = max(tmp_dp[j], dp[j - a[i]] + a[i]);
        }
        dp = tmp_dp;
    }
    cout << dp[c] << endl;
}
