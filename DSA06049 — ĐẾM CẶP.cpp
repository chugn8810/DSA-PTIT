#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long m, n, ans = 0;
		cin >> m >> n;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < m; i++)
		{
			int tmp = lower_bound(a.begin(), a.end(), a[i] + n) - (a.begin() + i + 1);
			ans += tmp;
		}
		cout << ans << endl;
	}
}
