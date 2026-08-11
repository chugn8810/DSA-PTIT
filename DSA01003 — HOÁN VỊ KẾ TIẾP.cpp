#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m;
		cin >> m;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		next_permutation(a.begin(), a.end());
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
