#include <bits/stdc++.h>
using namespace std;
int a[505][505];
int m, n;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
void dfs(int i, int j)
{
    a[i][j] = 0;
    for (int z = 0; z < 8; z++)
    {
        int x = i + dx[z];
        int y = j + dy[z];
        if (0 <= x && 0 <= y && x < m && y < n)
        {
            if (a[x][y] == 1)
            {
                dfs(x, y);
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

        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    res++;
                    dfs(i, j);
                }
            }
        }
        cout << res << endl;
    }
}
