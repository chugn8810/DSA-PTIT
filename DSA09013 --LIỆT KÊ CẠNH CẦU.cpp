#include <bits/stdc++.h>
using namespace std;
bool used[1001];
int total = 0;
vector<int> adj[1001];
vector<pair<int, int>> ds;
void DFS(int a)
{
    used[a] = true;
    total++;
    for (auto it : adj[a])
    {
        if (used[it] != true)
            DFS(it);
    }
}
void DFS1(int a, int x, int y)
{
    used[a] = true;
    total++;
    for (auto it : adj[a])
    {
        if ((x == it && y == a) || (x == a && y == it))
            continue;
        if (used[it] != true)
            DFS1(it, x, y);
    }
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        total = 0;
        ds.clear();
        memset(used, false, sizeof(used));
        int m, n;
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
        {
            adj[i].clear();
        }
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            ds.push_back({x, y});
        }
        int tplt = 0;
        for (int i = 1; i <= m; i++)
        {
            if (!used[i])
            {
                DFS(i);
                tplt++;
            }
        }
        vector<int> res;
        for (auto it : ds)
        {
            int x = it.first, y = it.second;
            memset(used, false, sizeof(used));
            int tmp = 0;
            for (int i = 1; i <= m; i++)
            {
                if (!used[i])
                {
                    DFS1(i, x, y);
                    tmp++;
                }
            }
            if (tmp > tplt)
            {
                res.push_back(x);
                res.push_back(y);
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
