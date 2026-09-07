#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (m * k > (m - m / 7) * n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i <= m - m / 7; i++)
            {
                if (m * k <= i * n)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
