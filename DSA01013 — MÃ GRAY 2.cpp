#include <bits/stdc++.h>
using namespace std;
int a[10], b[10];
void sinh(int m)
{
	b[0] = a[0];
	for (int i = 1; i < m; i++)
	{
		if (a[i] == b[i - 1])
		{
			b[i] = 0;
		}
		else
		{
			b[i] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << b[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			a[i] = s[i] - '0';
		}
		int m = s.size();
		sinh(m);
		cout << endl;
	}
}
