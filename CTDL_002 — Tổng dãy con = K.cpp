#include <bits/stdc++.h>
using namespace std;
int m, k;
int a[100];
vector<int> so(100);
bool check()
{
	long long tong = 0;
	for (int i = 0; i < m; i++)
	{
		if (a[i] == 1)
			tong += so[i];
	}
	if (tong == k)
		return true;
	else
		return false;
}
void sinh(int m)
{
	int tongso = 0;
	int i = m - 1;
	while (i >= 0)
	{
		i = m - 1;
		while (a[i] == 1)
		{
			i--;
		}
		a[i] = 1;
		if (i == -1)
			break;
		for (int j = i + 1; j < m; j++)
		{
			a[j] = 0;
		}
		if (check())
		{
			tongso++;
			for (int j = 0; j < m; j++)
			{
				if (a[j] == 1)
					cout << so[j] << " ";
			}
			cout << "\n";
		}
	}
	cout << tongso << endl;
}
int main()
{
	cin >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> so[i];
	}
	sinh(m);
}
