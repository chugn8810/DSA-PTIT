#include <bits/stdc++.h>
using namespace std;
int a[505][505], m, n;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int sohat = 0;
void xuly()
{
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 2)
            {
                q.push({i, j});
            }
        }
    }
    int checkhat = 0, ngay = 0;
    bool checklan = false;
    while (!q.empty())
    {
        int sz = q.size();
        checklan = false;
        for (int j = 0; j < sz; j++)
        {
            pair<int, int> tmp = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int x = tmp.first + dx[i];
                int y = tmp.second + dy[i];
                if (x >= 0 && x < m && y >= 0 && y < n)
                {
                    if (a[x][y] == 1)
                    {
                        a[x][y] = 2;
                        checkhat++;
                        checklan = true;
                        q.push({x, y});
                    }
                }
            }
        }
        if (checklan)
        {
            ngay++;
        }
    }
    if (checkhat == sohat)
        cout << ngay << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sohat = 0;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    sohat++;
            }
        }
        xuly();
    }
}
