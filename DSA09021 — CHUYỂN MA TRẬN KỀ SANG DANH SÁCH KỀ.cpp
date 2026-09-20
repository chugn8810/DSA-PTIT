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
    int a[m][m];
    vector<int> ds[1001];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                ds[i].push_back(j + 1);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (auto it : ds[i])
            cout << it << " ";
        cout << endl;
    }
}
