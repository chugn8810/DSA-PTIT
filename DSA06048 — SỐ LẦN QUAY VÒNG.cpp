#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int vitri = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i + 1] < a[i])
			{
				vitri = i + 1;
				break;
			}
		}
		cout << vitri << endl;
	}
}
