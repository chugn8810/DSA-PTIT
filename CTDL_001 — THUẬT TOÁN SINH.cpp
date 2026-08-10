#include <bits/stdc++.h>
using namespace std;
int m;
int a[10];
bool check()
{
    int i = 0, j = m - 1;
    while (i <= j)
    {
        if (a[i] != a[j])
            return false;
        i++, j--;
    }
    return true;
}
void sinh(int m)
{
    int i = m - 1;
    for (int j = 0; j < m; j++)
    {
        cout << a[j] << " ";
    }
    cout << "\n";
    while (i >= 0)
    {
        i = m - 1;
        while (a[i] == 1)
        {
            i--;
        }
        a[i] = 1;
        if (i > -1)
        {
            for (int j = i + 1; j < m; j++)
            {
                a[j] = 0;
            }
            if (check())
            {
                for (int j = 0; j < m; j++)
                {
                    cout << a[j] << " ";
                }
                cout << "\n";
            }
        }
    }
}
int main()
{
    cin >> m;
    sinh(m);
}
