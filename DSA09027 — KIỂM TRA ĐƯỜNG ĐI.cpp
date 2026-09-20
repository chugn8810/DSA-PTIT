#include <bits/stdc++.h>
using namespace std;
bool used[10001];
vector<int> adj[10001];
bool found = true;
vector<int> parent(10001, 0);
void dfs(int m)
{
    queue<int> q;
    used[m] = true;
    q.push(m);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto it : adj[v])
        {
            if (!used[it])
            {
                used[it] = true;
                q.push(it);
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
        found = false;
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
        }
        int k;
        cin >> k;
        while (k--)
        {
            memset(used, false, sizeof(used));
            int x, y;
            cin >> x >> y;
            dfs(x);
            if (used[y] == true)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}
