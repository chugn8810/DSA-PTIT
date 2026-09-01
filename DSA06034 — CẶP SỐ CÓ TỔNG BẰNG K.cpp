#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long m, k, ans = 0;
		cin >> m >> k;
		vector<long long> a(m);
		map<int, int> mp;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			ans += mp[k - a[i]];
			mp[a[i]]++;
		}
		cout << ans << endl;
	}
}
