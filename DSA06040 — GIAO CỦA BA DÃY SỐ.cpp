#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, p;
		cin >> n >> m >> p;
		vector<int> a(n), b(m), c(p), res;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		for (int i = 0; i < p; i++)
			cin >> c[i];
		int i = 0, j = 0, k = 0;
		while (i < n && j < m && k < p)
		{
			if (a[i] == b[j] && b[j] == c[k])
			{
				res.push_back(a[i]);
			}
			if (a[i] < b[j])
			{
				i++;
			}
			else if (b[j] < c[k])
			{
				j++;
			}
			else
			{
				k++;
			}
		}
		if (!res.empty())
		{
			for (int i = 0; i < res.size(); i++)
				cout << res[i] << " ";
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
}
