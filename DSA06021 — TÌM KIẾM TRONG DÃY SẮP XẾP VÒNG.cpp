#include <bits/stdc++.h>
using namespace std;
int binary(vector<int> &a, int n, int i, int j)
{
	;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (a[mid] == n)
			return mid;
		if (a[mid] < n)
		{
			i = mid + 1;
		}
		else
		{
			j = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, pivot = 0;
		cin >> m >> n;
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			if (i > 0 && a[i] < a[i - 1])
			{
				pivot = i;
			}
		}
		if (pivot == 0)
		{
			cout << binary(a, n, 0, a.size() - 1) + 1 << endl;
		}
		else
		{
			int tmp = binary(a, n, pivot, a.size() - 1);
			if (tmp != -1)
			{
				cout << tmp + 1 << endl;
			}
			int tmp1 = binary(a, n, 0, pivot);
			if (tmp1 != -1)
			{
				cout << tmp1 + 1 << endl;
			}
		}
	}
}
