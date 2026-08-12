#include <bits/stdc++.h>
using namespace std;
int m;
int a[10], b[10];
void sinh(int m)
{
	int i = m - 1;
	for (int j = 0; j < m; j++)
	{
		cout << a[j];
	}
	cout << " ";
	while (i >= 0)
	{
		i = m - 1;
		while (i >= 0 && a[i] == 1)
		{
			i--;
		}
		if (i > -1)
		{
			int c[10];
			a[i] = 1;
			b[0] = 0;

			for (int j = i + 1; j < m; j++)

			{

				a[j] = 0;
			}

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
	}
}

int main()

{

	int t;

	cin >> t;

	while (t--)

	{

		cin >> m;

		for (int i = 0; i < m; i++)

		{

			a[i] = 0;
		}

		sinh(m);

		cout << endl;
	}
}
