#include <bits/stdc++.h>
using namespace std;
void sinh(int m)
{
	int dem = 1;
	vector<int> a(m);
	for (int i = 0; i < m; i++)
	{
		a[i] = m - i;
	}
	for (int j = 0; j < m; j++)
	{
		cout << a[j];
	}
	cout << " ";
	int i = m - 2;
	while (i > -1)
	{
		i = m - 2;
		while (i >= 0 && a[i] < a[i + 1])
		{
			i--;
		}
		if (i == -1)
			break;
		int vitri = -1;
		for (int j = i + 1; j < m; j++)
		{
			int max = -1;
			if (a[j] < a[i] && max < a[j])
			{
				max = a[j];
				vitri = j;
			}
		}
		swap(a[i], a[vitri]);
		reverse(a.begin() + i + 1, a.end());
		for (int j = 0; j < m; j++)
		{
			cout << a[j];
		}
		cout << " ";
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m;
		cin >> m;
		sinh(m);
		cout << endl;
	}
}
