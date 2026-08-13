#include <bits/stdc++.h>
using namespace std;
int m;
int a[10], b[10];
void sinh(int m)
{
	int c[10];
	b[0] = 0;
	for (int j = 1; j < m; j++)
	{
		b[j] = a[j - 1];
	}
	for (int j = 0; j < m; j++)
	{
		if (a[j] == b[j])
		{
			c[j] = 0;
		}
		else
		{
			c[j] = 1;
		}
	}
	for (int j = 0; j < m; j++)
	{
		cout << c[j];
	}
	cout << " ";
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
		m = s.size();
		sinh(m);
		cout << endl;
	}
}
