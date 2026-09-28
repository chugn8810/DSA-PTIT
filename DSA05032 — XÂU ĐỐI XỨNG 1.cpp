#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        s2 = s1;
        int n = s1.size(), res = 0;
        reverse(s2.begin(), s2.end());
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s1.size() + 1));
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s1.size(); j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        cout << n - dp[n][n] << endl;
    }
}
