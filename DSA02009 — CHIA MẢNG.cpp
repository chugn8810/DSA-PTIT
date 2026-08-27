#include <bits/stdc++.h>
using namespace std;
int a[1000], m, n;
bool check[1000], ok = false;
void Try(int count, int sum, int chia)
{
	if (ok == true)
	{
		return;
	}
	if (count == n)
	{
		ok = true;
		return;
	}
	for (int i = 0; i < m; i++)
	{
		if (sum == chia)
		{
			Try(count + 1, 0, chia);
		}
		else if (sum < chia)
		{
			Try(count, sum + a[i], chia);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int sum = 0;
		cin >> m >> n;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			sum += a[i];
			check[i] = false;
		}
		if (sum % n != 0)
			cout << 0 << "\n";
		else
		{
			Try(0, 0, sum / n);
			if (ok)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
	}
}
