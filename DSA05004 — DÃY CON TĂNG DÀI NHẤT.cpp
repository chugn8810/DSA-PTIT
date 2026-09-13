#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, res = 0;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(m, 1);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
            res = max(res, dp[i]);
        }
    }
    cout << res << endl;
}
