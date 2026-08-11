#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int m, n, tong = 0;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
void check(int i, int j)
{
	a[i][j] = '.';
	for (int k = 0; k < 4; k++)
	{
		int x = i + dx[k];
		int y = j + dy[k];
		if (x >= 0 && x < m && y >= 0 && y < n)
		{
			if (a[x][y] == '#')
				check(x, y);
		}
	}
}
int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '#')
			{
				tong++;
				check(i, j);
			}
		}
	}
	cout << tong << endl;
}
