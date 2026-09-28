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
        int n = s.size();
        long long total = 0;
        vector<long long> dp(n + 1);
        dp[0] = s[0] - '0';
        for (int i = 1; i < n; i++)
        {
            dp[i] = dp[i - 1] * 10 + (i + 1) * (s[i] - '0');
            total += dp[i];
        }
        cout << total + s[0] - '0' << endl;
    }
}
