#include <bits/stdc++.h>
using namespace std;
bool used[10001];
vector<int> adj[10001];
bool found = false;
string res;
void dfs(int m, int t, string s)
{
	used[m] = true;
	for (auto it : adj[m])
	{
		if (!used[it] && !found)
		{
			if (it == t)
			{
				found = true;
				res = s + " " + to_string(it);
			}
			dfs(it, t, s + " " + to_string(it));
		}
	}
}

int main()
{
	int f;
	cin >> f;
	while (f--)
	{
		found = false;
		memset(used, false, sizeof(used));
		res.clear();
		int m, n, k, t;
		cin >> m >> n >> k >> t;
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
		dfs(k, t, to_string(k));
		if (found)
			cout << res;
		else
			cout << -1;
		cout << "\n";
	}
}
