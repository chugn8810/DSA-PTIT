#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n, m;
void bfs()
{
    vector<vector<int>> used(n + 1, vector<int>(m + 1, -1));
    queue<pair<int, int>> q;
    q.push({1, 1});
    used[1][1] = 0;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        if (it.first == n && it.second == m)
        {
            cout << used[n][m] << endl;
            return;
        }
        int step = a[it.first][it.second];
        if (step <= 0)
            continue;
        int next1 = it.second + step;
        if (next1 <= m && used[it.first][next1] == -1)
        {
            used[it.first][next1] = used[it.first][it.second] + 1;
            q.push({it.first, next1});
        }
        int next2 = it.first + step;
        if (next2 <= n && used[next2][it.second] == -1)
        {
            used[next2][it.second] = used[it.first][it.second] + 1;
            q.push({next2, it.second});
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        bfs();
    }
}
