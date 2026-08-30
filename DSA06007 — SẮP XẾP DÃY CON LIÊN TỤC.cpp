#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, k, r, l;
		cin >> m;
		vector<int> a(m), b(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < m; i++)
		{
			if (a[i] != b[i])
			{
				l = i;
				break;
			}
		}
		for (int i = m - 1; i >= 0; i--)
		{
			if (a[i] != b[i])
			{
				r = i;
				break;
			}
		}
		cout << l + 1 << " " << r + 1 << endl;
	}
}
