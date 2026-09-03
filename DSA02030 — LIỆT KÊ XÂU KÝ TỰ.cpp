#include <bits/stdc++.h>
using namespace std;
int s[100];
void sinh(char m, int n, int j)
{
	for (int i = 0; i < (int)m - 64; i++)
	{
		if (i >= s[j - 1])
		{
			if (j == n - 1)
			{
				s[j] = i;
				for (int f = 0; f <= j; f++)
				{
					char k = s[f] + 65;
					cout << k;
				}
				cout << endl;
			}
			else
			{
				s[j] = i;
				sinh(m, n, j + 1);
			}
		}
	}
}
int main()
{
	char m;
	int n;
	cin >> m >> n;
	sinh(m, n, 0);
}
