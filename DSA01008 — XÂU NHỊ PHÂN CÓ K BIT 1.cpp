#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[30];
bool check()
{
	int so1 = 0;
	for (int j = 0; j < m; j++)
	{
		if (a[j] == 1)
		{
			so1++;
		}
	}
	if (so1 == n)
		return true;
	else
		return false;
}
void sinh()
{
	int i = m - 1;
	if (n == 0)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[j];
		}
		cout << "\n";
	}
	while (i >= 0)
	{
		i = m - 1;
		while (i >= 0 && a[i] == 1)
		{
			i--;
		}
		a[i] = 1;
		if (i > -1)
		{
			for (int j = i + 1; j < m; j++)
			{
				a[j] = 0;
			}
			if (check())
			{
				for (int j = 0; j < m; j++)
				{
					cout << a[j];
				}
				cout << "\n";
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof(a));
		cin >> m >> n;
		sinh();
	}
}
