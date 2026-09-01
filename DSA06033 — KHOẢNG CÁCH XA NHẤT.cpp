#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, ans = -1;
		cin >> m;
		vector<pair<int, int>> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a.begin(), a.end());
		int k = a[0].second, Min = a[0].first;
		for (int i = 0; i < m; i++)
		{
			if (a[i].first > Min)
			{
				ans = max(ans, a[i].second - k);
			}
			if (a[i].second < k)
			{
				Min = a[i].first;
				k = a[i].second;
			}
		}
		cout << ans << endl;
	}
}
