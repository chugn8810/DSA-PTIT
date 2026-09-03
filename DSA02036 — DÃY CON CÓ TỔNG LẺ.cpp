#include <bits/stdc++.h>
using namespace std;
int prime[1000000], m, a[50], luu[50];
bool used[50];
void quaylui(int tong, int j, int vitri)
{
	{
		for (int i = 0; i < vitri; i++)
		{
			if (!used[i])
			{
				used[i] = true;
				luu[j] = a[i];
				if ((tong + a[i]) % 2 != 0)
				{
					for (int i = 0; i <= j; i++)
					{
						cout << luu[i] << " ";
					}
					cout << endl;
				}
				quaylui(tong + a[i], j + 1, i);
				used[i] = false;
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
		memset(used, false, sizeof(used));
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a, a + m);
		quaylui(0, 0, m);
	}
}
