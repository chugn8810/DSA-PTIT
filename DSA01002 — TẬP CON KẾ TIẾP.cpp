#include <bits/stdc++.h>
using namespace std;
void sinh(int m, int n, vector<int> &a)
{
	int i = m - 1;
	while (i >= 0 && a[i] == n - m + i + 1)
	{
		i--;
	}
	if (i == -1)
	{
		for (int j = 0; j < m; j++)
		{
			cout << j + 1 << " ";
		}
	}
	else
	{
		a[i] += 1;
		for (int j = i + 1; j < m; j++)
		{
			a[j] = a[j - 1] + 1;
		}
		for (int j = 0; j < m; j++)
		{
			cout << a[j] << " ";
		}
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
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sinh(n, m, a);
		cout << endl;
	}
}
