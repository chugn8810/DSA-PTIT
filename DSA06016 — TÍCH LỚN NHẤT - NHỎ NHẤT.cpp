#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long m, n, r = INT_MIN, l = INT_MAX;
		cin >> m >> n;
		vector<long long> a(m), b(n);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			r = max(r, a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			l = min(l, b[i]);
		}
		cout << l * r << endl;
	}
}
