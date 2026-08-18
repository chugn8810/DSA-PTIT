#include <bits/stdc++.h>
using namespace std;
int a[105][105], m, luu[105];
set<string> res;
void quaylui(int i, int j, int sobuoc)
{
    if (sobuoc > 2 * m - 2)
    {
        return;
    }
    if (sobuoc == 2 * m - 2)
    {
        string s;
        for (int i = 0; i < sobuoc; i++)
        {
            s += luu[i];
        }
        res.insert(s);
    }
    if (i + 1 < m && a[i + 1][j] == 1)
    {
        luu[sobuoc] = 'D';
        quaylui(i + 1, j, sobuoc + 1);
    }
    if (j + 1 < m && a[i][j + 1] == 1)
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

        cin >> m;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[m - 1][m - 1] == 0 || a[0][0] == 0)
            cout << -1;
        else
        {
            quaylui(0, 0, 0);
            if (!res.empty())
                for (auto it : res)
                {
                    cout << it << " ";
                }
            else
                cout << -1;
        }
        cout << endl;
    }
}
