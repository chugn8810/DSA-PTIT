#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        int sum = 0, res = 0;
        for (int i = 0; i < k; i++)
        {
            if (sum < 0)
            {
                sum = 0;
            }
            sum += a[i];
            res = max(sum, res);
        }
        cout << res << endl;
    }
}
