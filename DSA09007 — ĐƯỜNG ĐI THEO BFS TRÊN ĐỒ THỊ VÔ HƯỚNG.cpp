#include <bits/stdc++.h>
using namespace std;
bool used[10001];
vector<int> adj[10001];
bool found = true;
vector<int> parent(10001, 0);
void dfs(int m, int f)
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
				if (it == f)
				{
					found = true;
					parent[it] = v;
					return;
				}
				used[it] = true;
				q.push(it);
				parent[it] = v;
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
		int m, n, k, f;
		cin >> m >> n >> k >> f;
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
		dfs(k, f);
		if (found)
		{
			vector<int> res;
			int c = f;
			res.push_back(f);
			while (c != k)
			{
				c = parent[c];
				res.push_back(c);
			}
			for (int i = res.size() - 1; i >= 0; i--)
			{
				cout << res[i] << " ";
			}
		}
		else
			cout << -1;
		cout << "\n";
	}
}
