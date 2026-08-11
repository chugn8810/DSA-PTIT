#include <bits/stdc++.h>
using namespace std;
void sinh(int m, int n)
{
	vector<int> a(m);
	iota(a.begin(), a.end(), 1);
	for (int j = 0; j < m; j++)
	{
		cout << a[j];
	}
	cout << " ";
	int i = m - 1;
	while (i >= 0)
	{
		i = m - 1;
		while (i >= 0 && a[i] == n - m + i + 1)
		{
			i--;
		}
		if (i == -1)
			return;
		a[i] += 1;
		for (int j = i + 1; j < m; j++)
		{
			a[j] = a[j - 1] + 1;
		}
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
		int m, n;
		cin >> m >> n;
		sinh(n, m);
		cout << endl;
	}
}
