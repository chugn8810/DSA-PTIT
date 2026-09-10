#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 0)
    {
        cout << 0 << " " << 0;
    }
    else if (m == 0 && n > 0)
    {
        cout << -1 << " " << -1;
    }
    else if (n == 0 || m > n * 9)
    {
        cout << -1 << " " << -1;
    }
    else
    {
        int b[105], tmp1 = m - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (tmp1 > 9)
            {
                b[i] = 9;
            }
            else
            {
                b[i] = tmp1;
            }
            tmp1 -= b[i];
        }
        b[0] += 1;
        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
        cout << " ";
        int a[105], tmp = m;
        for (int i = 0; i < n; i++)
        {
            if (tmp > 9)
            {
                a[i] = 9;
            }
            else
            {
                a[i] = tmp;
            }
            tmp -= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
}
