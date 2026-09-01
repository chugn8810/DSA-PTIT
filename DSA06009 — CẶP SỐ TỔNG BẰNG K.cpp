#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, count = 0;
		cin >> m >> n;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (a[i] + a[j] == n)
					count++;
			}
		}
		cout << count << endl;
	}
}
