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
		int n, res = -1;
		cin >> n;
		vector<int> a(n);
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for (int i = 0; i < n; i++)
		{
			if (mp[a[i]] > 1)
			{
				res = a[i];
				break;
			}
		}
		if (res != -1)
		{
			cout << res << endl;
		}
		else
		{
			cout << "NO\n";
		}
	}
}
