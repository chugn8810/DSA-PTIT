#include <bits/stdc++.h>
using namespace std;
int b[1000];
void sinh(int m, int n)
{
	vector<int> a(m);
	iota(a.begin(), a.end(), 1);
	for (int j = 0; j < m; j++)
	{
		cout << b[a[j] - 1] << " ";
	}
	cout << endl;
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
			cout << b[a[j] - 1] << " ";
		}
		cout << endl;
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
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		sort(b, b + m);
		sinh(n, m);
		cout << endl;
	}
}
