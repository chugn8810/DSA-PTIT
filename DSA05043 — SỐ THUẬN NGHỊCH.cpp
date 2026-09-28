#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size(), res = 0;
        vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
        for (int dodai = 1; dodai <= n; dodai++)
        {
            for (int i = 0; i <= n - dodai; i++)
            {
                int j = dodai + i - 1;
                if (s[i] == s[j])
                {
                    if (dodai <= 2 || dp[i + 1][j - 1])
                    {
                        dp[i][j] = true;
                        res = max(res, dodai);
                    }
                }
            }
        }
        cout << res << endl;
    }
}
