#include <bits/stdc++.h>
using namespace std;
int prime[1000000], m;
char a[50], luu[50];
bool used[50];
void quaylui(int tong, int j)
{
	for (int i = 0; i < m; i++)
	{
		if (!used[i] && luu[j - 1] < a[i])
		{
			used[i] = true;
			luu[j] = a[i];
			for (int i = 0; i <= j; i++)
			{
				cout << luu[i];
			}
			cout << " ";
			quaylui(tong + a[i], j + 1);
			used[i] = false;
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
		quaylui(0, 0);
		cout << endl;
	}
}
