#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, res = 0;
		cin >> m >> n;
		vector<int> a;
		for (int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n + m; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
