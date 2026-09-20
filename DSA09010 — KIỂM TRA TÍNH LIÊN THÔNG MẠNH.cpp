#include <bits/stdc++.h>
using namespace std;
bool used[1001];
int total = 0;
vector<int> adj[1001];
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
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        total = 0;
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
        }
        int check = 1;
        for (int i = 1; i <= m; i++)
        {
            memset(used, false, sizeof(used));
            total = 0;
            DFS(i);
            if (total != m)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
