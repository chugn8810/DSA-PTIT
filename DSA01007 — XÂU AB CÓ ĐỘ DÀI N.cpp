#include <bits/stdc++.h>
using namespace std;
int m;
char a[10];
void sinh(int m)
{
	for (int j = 0; j < m; j++)
	{
		a[j] = 'A';
	}
	int i = m - 1;
	for (int j = 0; j < m; j++)
	{
		cout << a[j];
	}
	cout << " ";
	while (i >= 0)
	{
		i = m - 1;
		while (i >= 0 && a[i] == 'B')
		{
			i--;
		}
		a[i] = 'B';
		if (i > -1)
		{
			for (int j = i + 1; j < m; j++)
			{
				a[j] = 'A';
			}
			for (int j = 0; j < m; j++)
			{
				cout << a[j];
			}
			cout << " ";
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> m;
		sinh(m);
		cout << endl;
	}
}
