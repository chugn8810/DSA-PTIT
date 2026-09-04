#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    while (t--)
    {
        int m, res = 0;
        cin >> m;
        while (m > 0)
        {
            int tmp = 0;
            for (int i = 9; i >= 0; i--)
            {
                if (m >=a[i])
                {
                    tmp = a[i];
                    break;
                }
            }
            int so = m / tmp;
            m -= (tmp * so);
            res += so;
        }
        cout << res << endl;
    }
}
