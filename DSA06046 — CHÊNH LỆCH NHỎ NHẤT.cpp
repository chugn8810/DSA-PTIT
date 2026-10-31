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
		int n, res = 999999999;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n - 1; i++)
		{
			res = min(res, a[i + 1] - a[i]);
		}
		cout << res << endl;
	}
}
