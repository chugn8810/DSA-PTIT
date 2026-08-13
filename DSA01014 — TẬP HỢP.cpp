#include <bits/stdc++.h>
using namespace std;
int m, n, k, ans = 0;
int a[20];
void check()
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += a[i];
	}
	if (tong == k)
		++ans;
}
void sinh(int j)
{
	for (int i = j; i <= (m - n + j); i++)
	{
		if (i > a[j - 1])
		{
			a[j] = i;
		}
		else
		{
			continue;
		}
		if (j == n)
		{
			check();
		}

		else
		{
			sinh(j + 1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (cin >> m >> n >> k && m != 0 && n != 0 && k != 0)
	{
		ans = 0;
		memset(a, 0, sizeof(a));
		sinh(1);
		cout << ans << endl;
	}
}
