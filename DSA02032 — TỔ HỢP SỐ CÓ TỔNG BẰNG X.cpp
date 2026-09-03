#include <bits/stdc++.h>
using namespace std;
int n, p, a[100], luu[1000], check = 0, total = 0;
string s;
void quaylui(int tong, int buoc)
{
	if (tong > p)
	{
		return;
	}
	if (tong == p)
	{
		total += 1;
		check = 1;
		s += "{";
		for (int i = 0; i < buoc; i++)
		{
			s += to_string(luu[i]);
			if (i == buoc - 1)
				s += "";
			else
				s += " ";
		}
		s += "} ";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= luu[buoc - 1])
		{
			luu[buoc] = a[i];
			quaylui(tong + a[i], buoc + 1);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		s.clear();
		total = 0;
		check = 0;
		cin >> n >> p;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		quaylui(0, 0);
		if (check == 0)
		{
			cout << -1;
		}
		else
		{
			cout << total << " ";
			cout << s;
		}
		cout << endl;
	}
}
