#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        vector<int> a(n), dp(n, 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] >=a[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        cout << n - res << endl;
    }
}
