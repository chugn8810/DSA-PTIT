#include <bits/stdc++.h>
using namespace std;
int count(int x, vector<int> &a, vector<int> &b)
{
	if (x == 0)
		return 0;
	if (x == 1)
		return b[0];
	int it = upper_bound(a.begin(), a.end(), x) - a.begin();
	int ans = a.size() - it;
	ans += (b[0] + b[1]);
	if (x == 2)
		ans -= (b[3] + b[4]);
	if (x == 3)
		ans += b[2];
	return ans;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, ans = 0;
		cin >> m >> n;
		vector<int> a(m), b(n), c(5, 0);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (b[i] < 5)
			{
				c[b[i]]++;
			}
		}
		sort(b.begin(), b.end());
		for (int i = 0; i < m; i++)
		{
			ans += count(a[i], b, c);
		}
		cout << ans << endl;
	}
} DSA06008 — ĐẾM CẶP
