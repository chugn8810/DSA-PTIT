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
		int n;
		cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			mp[x]++;
		}
		int res = -1;
		for (auto it : mp)
		{
			if (it.second > n / 2)
			{
				res = it.first;
			}
		}
		if (res == -1)
			cout << "NO\n";
		else
			cout << res << endl;
	}
}
