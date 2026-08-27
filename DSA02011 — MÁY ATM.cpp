#include <bits/stdc++.h>
using namespace std;
long long a[1000], used[1000], m, n, res = 99999999999;
bool check[1000], ok = false;
void Try(int count, long long sum, int tien)
{
	if (ok == true)
	{
		return;
	}
	if (sum == tien)
	{
		ok = true;
		if (count < res)
			res = count;
		return;
	}
	for (int i = count; i < m; i++)
	{
		if (!check[i])
		{
			check[i] = true;
			if (sum < tien)
			{
				Try(count + 1, sum + a[i], tien);
			}
			check[i] = false;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ok = false;
		res = 99999999999;
		int sum = 0;
		cin >> m >> n;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			sum += a[i];
			check[i] = false;
		}
		sort(a, a + m, greater<long long>());
		if (sum < n)
			cout
				<< -1 << "\n";
		else
		{
			Try(0, 0, n);
			if (ok)
				cout << res << "\n";
			else
				cout << -1 << "\n";
		}
	}
}
