#include <bits/stdc++.h>
using namespace std;
int a[50];
int m, total = 0;
string s;
bool check(int j)
{
	for (int i = 0; i < j; i++)
	{
		if (a[i] < a[i + 1])
			return false;
	}
	return true;
}
void quaylui(int j, int limit)
{
	for (int i = limit; i >= 1; i--)
	{
		a[j] = i;
		if (limit - i == 0)
		{
			if (check(j))
			{
				total++;
				s += "(";
				for (int k = 0; k <= j; k++)
				{
					s += to_string(a[k]);
					if (k == j)
						s += "";
					else
						s += " ";
				}
				s += ") ";
			}
		}
		else
		{
			quaylui(j + 1, limit - i);
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
		cin >> m;
		quaylui(0, m);
		cout << total << endl;
		cout << s << endl;
	}
}
