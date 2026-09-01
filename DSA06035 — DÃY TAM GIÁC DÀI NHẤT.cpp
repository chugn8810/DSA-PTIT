#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, ans = 0;
		cin >> m;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		vector<int> L(m), R(m);
		L[0] = R[m - 1] = 1;
		for (int i = 1; i < m; i++)
		{
			if (a[i] > a[i - 1])
			{
				L[i] = L[i - 1] + 1;
			}
			else
			{
				L[i] = 1;
			}
		}
		for (int i = m - 2; i >= 0; i--)
		{
			if (a[i] > a[i + 1])
			{
				R[i] = R[i + 1] + 1;
			}
			else
			{
				R[i] = 1;
			}
		}
		for (int i = 0; i < m; i++)
		{
			ans = max(ans, L[i] + R[i] - 1);
		}
		cout << ans << endl;
	}
}
