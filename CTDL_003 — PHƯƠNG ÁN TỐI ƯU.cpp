#include <bits/stdc++.h>
using namespace std;
int m, k, ma = INT_MIN;
int a[100];
vector<int> so1(100), so2(100), ketqua(100);
void sinh(int m)
{
	int tongso = 0;
	int i = m - 1;
	while (i >= 0)
	{
		i = m - 1;
		while (a[i] == 1)
		{
			i--;
		}
		a[i] = 1;
		if (i == -1)
			break;
		for (int j = i + 1; j < m; j++)
		{
			a[j] = 0;
		}
		long long tong = 0, w = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j] == 1)
			{
				tong += (so1[j]);
				w += so2[j];
			}
		}
		if (w <= k && ma < tong)
		{
			ma = tong;
			for (int j = 0; j < m; j++)
			{
				ketqua[j] = a[j];
			}
		}
	}
}
int main()
{
	cin >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> so1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> so2[i];
	}
	sinh(m);
	cout << ma << "\n";
	for (int i = 0; i < m; i++)
	{
		cout << ketqua[i] << " ";
	}
}
