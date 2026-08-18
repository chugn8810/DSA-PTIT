
#include <bits/stdc++.h>
using namespace std;
int a[105][105], m, n, luu[105], tong = 0;
set<string> res;
void quaylui(int i, int j, int sobuoc)
{
    if (i == m - 1 && j == n - 1)
    {
        tong++;
    }
    if (i + 1 < m)
    {
        luu[sobuoc] = 'D';
        quaylui(i + 1, j, sobuoc + 1);
    }
    if (j + 1 < n)
    {

        luu[sobuoc] = 'R';
        quaylui(i, j + 1, sobuoc + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        tong = 0;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        quaylui(0, 0, 0);
        if (tong != 0)
            cout << tong;
        else
            cout << -1;
        cout << endl;
    }
}
