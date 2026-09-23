#include <bits/stdc++.h>
using namespace std;
map<int, int> dp[100000];
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
        for (int dai = 1; dai <= n; dai++)
        {
            for (int i = 0; i <=n - dai; i++)
            {
                int j = dai + i - 1;
                if (s[i] == s[j])
                {
                    if (dai <= 2 || dp[i + 1][j - 1])
                    {
                        dp[i][j] = true;
                        res = max(res, dai);
                    }
                }
            }
        }
        cout << res << endl;
    }
}
