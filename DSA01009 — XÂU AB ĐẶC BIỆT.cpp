#include <bits/stdc++.h>
using namespace std;
int m, n, tong = 0;
char a[20];
vector<string> b;
bool check()
{
	int dem = 0, xuahien = 0;
	for (int i = 0; i < m; i++)
	{
		if (a[i] == 'A')
		{
			++dem;
		}
		else if (a[i] == 'B')
		{
			if (dem == n)
			{
				xuahien++;
			}
			dem = 0;
		}
	}
	if (a[m - 1] == 'A')
		if (dem == n)
		{
			xuahien++;
		}
	if (xuahien == 1)
		return true;
	else
		return false;
}
void sinh(int m)
{
	for (int j = 0; j < m; j++)
	{
		a[j] = 'A';
	}
	int i = m - 1;
	if (check())
	{
		b.push_back(a);
		tong++;
	}
	while (i >= 0)
	{
		i = m - 1;
		while (i >= 0 && a[i] == 'B')
		{
			i--;
		}
		if (i > -1)
		{
			a[i] = 'B';
			for (int j = i + 1; j < m; j++)
			{
				a[j] = 'A';
			}
			if (check())
			{
				b.push_back(a);
				tong++;
			}
		}
	}
}
int main()
{
	cin >> m >> n;
	sinh(m);
	cout << tong << endl;
	for (auto it : b)
	{
		cout << it << endl;
	}
}
