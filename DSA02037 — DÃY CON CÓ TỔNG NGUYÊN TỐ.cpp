#include <bits/stdc++.h>
using namespace std;
int prime[1000005], m, a[50], luu[50];
bool used[50];
void sang()
{
	for (int i = 0; i <= 1000000; i++)
	{
		prime[i] = 1;
	}
	prime[1] = prime[0] = 0;
	for (int i = 2; i * i <= 1000000; i++)
	{
		if (prime[i] == 1)
			for (int j = i * i; j <= 1000000; j += i)
			{
				prime[j] = 0;
			}
	}
}
void quaylui(int tong, int j)
{
	if (j == 0)
	{
		for (int i = 0; i < m; i++)
		{
			used[i] = true;
			luu[j] = a[i];
			if (prime[tong + a[i]] == 1)
			{
				for (int i = 0; i <= j; i++)
				{
					cout << luu[i] << " ";
				}
				cout << endl;
			}
			quaylui(tong + a[i], j + 1);
			used[i] = false;
		}
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			if (!used[i] && a[i] < luu[j - 1])
			{
				used[i] = true;
				luu[j] = a[i];
				if (prime[tong + a[i]] == 1)
				{
					for (int i = 0; i <= j; i++)
					{
						cout << luu[i] << " ";
					}
					cout << endl;
				}
				quaylui(tong + a[i], j + 1);
				used[i] = false;
			}
		}
	}
}
int main()
{
	sang();
	int t;
	cin >> t;
	while (t--)
	{
		memset(used, false, sizeof(used));
		memset(a, 0, sizeof(a));
		memset(luu, 0, sizeof(luu));
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a, a + m);
		quaylui(0, 0);
	}
}
