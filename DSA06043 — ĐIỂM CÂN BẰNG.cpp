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
		vector<int> a(n), prefix(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		prefix[0] = a[0];
		for (int i = 1; i < n; i++)
		{
			prefix[i] = prefix[i - 1] + a[i];
		}
		for (int i = 1; i < n; i++)
		{
			int nuatrai = prefix[i - 1];
			int nuaphai = prefix[n - 1] - prefix[i];
			if (nuatrai == nuaphai)
			{
				res = i + 1;
				break;
			}
		}
		if (res != -1)
		{
			cout << res << endl;
		}
		else
		{
			cout << "-1\n";
		}
	}
}
