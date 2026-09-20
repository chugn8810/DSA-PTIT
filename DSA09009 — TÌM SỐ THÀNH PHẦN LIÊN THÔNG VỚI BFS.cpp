#include <bits/stdc++.h>
using namespace std;

bool used[1001];
void DFS(int a, vector<int> adj[1001])
{
    queue<int> q;
    q.push(a);
    while (!q.empty())
    {
        int x = q.front();
        used[x] = true;
        q.pop();
        for (auto it : adj[x])
        {
            if (!used[it])
                q.push(it);
        }
    }
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        vector<int> adj[1001];
        memset(used, false, sizeof(used));
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int tong = 0;
        for (int i = 1; i <= m; i++)
        {
            if (!used[i])
            {
                DFS(i, adj);
                tong++;
            }
        }
        cout << tong << endl;
    }
}
