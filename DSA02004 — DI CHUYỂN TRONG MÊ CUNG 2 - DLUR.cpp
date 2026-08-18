#include <bits/stdc++.h>
using namespace std;
int a[105][105], used[105][105], m, luu[105];
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};
set<string> res;
void quaylui(int i, int j, int sobuoc)
{
    if (i == m - 1 && j == m - 1)
    {
        string s;
        for (int i = 0; i < sobuoc; i++)
        {
            s += luu[i];
        }
        res.insert(s);
    }
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < m && y >= 0 && y < m)
        {
            if (!used[x][y] && a[x][y] == 1)
            {
                used[x][y] = true;
                if (dx[k] == 0 && dy[k] == 1)
                {
                    luu[sobuoc] = 'R';
                    quaylui(x, y, sobuoc + 1);
                }
                else if (dx[k] == 1 && dy[k] == 0)
                {
                    luu[sobuoc] = 'D';
                    quaylui(x, y, sobuoc + 1);
                }
                else if (dx[k] == 0 && dy[k] == -1)
                {
                    luu[sobuoc] = 'L';
                    quaylui(x, y, sobuoc + 1);
                }
                else
                {
                    luu[sobuoc] = 'U';
                    quaylui(x, y, sobuoc + 1);
                }
                used[x][y] = false;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        memset(used, 0, sizeof(used));
        used[0][0] = 1;
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
