#include <bits/stdc++.h>
using namespace std;
int a[1005];
void sinh(int m, int n)
{
	int i = m;
	while (i > 0 && a[i] == a[i - 1] + 1)
	{
		i--;
	}
	if (i == 0)
	{
		for (int j = 0; j <m; j++)
		{
			cout << n - m + 1 + j << " ";
		}
		return;
	}
	a[i] -= 1;
	for (int j = i + 1; j <= m; j++)
	{
		a[j] = n - m  + j;
	}
	for (int j = 1; j <= m; j++)
	{
		cout << a[j] << " ";
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> n >> m;
		for (int i = 1; i <= m; i++)
		{
			cin >> a[i];
		}
		sinh(m, n);
		cout << endl;
	}
}
