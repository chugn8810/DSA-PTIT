#include <bits/stdc++.h>
using namespace std;
vector<int> a(5);
int b[4];
bool ok = false;
void Try(int count)
{
	if (ok == true)
		return;
	for (int i = 0; i < 3; i++)
	{
		b[count] = i;
		if (count == 3)
		{
			int res = a[0];
			for (int i = 0; i < 4; i++)
			{
				if (b[i] == 0)
				{
					res += a[i + 1];
				}
				else if (b[i] == 1)
				{
					res -= a[i + 1];
				}
				else if (b[i] == 2)
				{
					res *= a[i + 1];
				}
			}
			if (res == 23)
				ok = true;
		}
		else
		{
			Try(count + 1);
		}
	}
}
bool check()
{
	for (int i = 0; i < 4; i++)
	{
		if (a[i] < a[i + 1])
			return true;
	}
	return false;
}
int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		ok = false;
		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		while (check())
		{
			Try(0);
			next_permutation(a.begin(), a.end());
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
