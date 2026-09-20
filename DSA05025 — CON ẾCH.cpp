#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int MOD = 1e9 + 7;
    while (m--)
    {
        int n, k;
        cin >> n;
        vector<long long> a(n + 1);
        a[0] = 1, a[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if (i - j >= 0)
                {
                    a[i] = (a[i] + a[i - j]);
                }
            }
        }
        cout << a[n] << endl;
    }
}
