#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, res = 999999999, ketqua = 0;
		cin >> m;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i != j)
				{
					int tmp = a[j] + a[i];
					if (res > abs(tmp) || (res == abs(tmp) && tmp < ketqua))
					{
						res = abs(tmp);
						ketqua = tmp;
					}
				}
			}
		}
		cout << ketqua << endl;
	}
}
