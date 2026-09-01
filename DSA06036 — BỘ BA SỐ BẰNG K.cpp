#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long m, k, pivot = 0;
		cin >> m >> k;
		vector<long long> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < m - 2; i++)
		{
			int l = i + 1;
			int r = m - 1;
			while (l < r)
			{
				if (a[i] + a[l] + a[r] > k)
				{
					r--;
				}
				else if (a[i] + a[l] + a[r] < k)
				{
					l++;
				}
				else if (a[i] + a[l] + a[r] == k)
				{
					pivot = 1;
					break;
				}
			}
		}
		if (pivot != 0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
