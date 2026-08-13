#include <bits/stdc++.h>
using namespace std;
int m;
string s;
void sinh()
{
	int i = s.size() - 1;
	while (i >= 0 && s[i] == '0')
	{
		i--;
	}
	if (i > -1)
	{
		s[i] = '0';
		for (int j = i + 1; j < s.size(); j++)
		{
			s[j] = '1';
		}
		for (int j = 0; j < s.size(); j++)
		{
			cout << s[j];
		}
		cout << "\n";
	}
	else if (i == -1)
	{
		for (int j = 0; j < s.size(); j++)
		{
			cout << 1;
		}
		cout << "\n";
	}
}

int main()
{
	cin >> m;
	while (m--)
	{
		cin >> s;
		sinh();
	}
}
