#include <bits/stdc++.h>
using namespace std;
int b[1000], total = INT_MAX;
void quaylui(int n, int buoc)
{
	if (n == 1 && buoc > 0)
	{
		total = min(total, buoc);
		return;
	}
	if (n % 3 == 0)
	{
		if (buoc > total)
			return;
		else
			quaylui(n / 3, buoc + 1);
	}
	if (n % 2 == 0)
	{
		if (buoc > total)
			return;
		else
			quaylui(n / 2, buoc + 1);
	}
	if (buoc > total)
		return;
	else
		quaylui(n - 1, buoc + 1);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		total = INT_MAX;
		int a;
		cin >> a;
		quaylui(a, 0);
		cout << total << endl;
	}
}
