#include <bits/stdc++.h>
using namespace std;
bool used[10001];
vector<int> adj[10001], res;
void bfs(int m)
{
	queue<int> q;
	used[m] = true;
	q.push(m);
	res.push_back(m);
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
				res.push_back(it);
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
		memset(used, false, sizeof(used));
		res.clear();
		int m, n, k;
		cin >> m >> n >> k;
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
		dfs(k);
		for (int i = 0; i < res.size(); i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}
}
