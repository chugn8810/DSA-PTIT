#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, res = 0;
		cin >> m >> n;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = a.size() - 1; i >= a.size() - n; i--)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
