#include <bits/stdc++.h>
using namespace std;
void sinh(int m)
{
	int dem = 1;
	vector<int> a(m);
	iota(a.begin(), a.end(), 1);
	cout << dem++ << ": ";
	for (int j = 0; j < m; j++)
	{
		cout << a[j] << " ";
	}
	cout << endl;
	int i = m - 2;
	while (i > -1)
	{
		i = m - 2;
		while (i >= 0 && a[i] > a[i + 1])
		{
			i--;
		}
		if (i == -1)
			break;
		int vitri = -1;
		for (int j = i + 1; j < m; j++)
		{
			int min = 100;
			if (a[j] > a[i] && min > a[j])
			{
				min = a[j];
				vitri = j;
			}
		}
		swap(a[i], a[vitri]);
		reverse(a.begin() + i + 1, a.end());
		cout << dem++ << ": ";
		for (int j = 0; j < m; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int m;
	cin >> m;
	sinh(m);
}
