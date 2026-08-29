#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, k;
		cin >> m >> k;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		int l = 0, r = k - 1;
		for (int i = 0; i <= m - k; i++)
		{
			int ketqua = 0;
			for (int j = i; j < i + k; j++)
			{
				ketqua = max(ketqua, a[j]);
			}
			cout << ketqua << " ";
		}
		cout << endl;
	}
}
