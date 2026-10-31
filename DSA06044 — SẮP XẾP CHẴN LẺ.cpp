#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{

	int n;
	cin >> n;
	vector<int> a, b, c(n);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (i % 2 == 0)
			a.push_back(x);
		else
			b.push_back(x);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	int tmp1 = 0;
	for (int i = 0; i < a.size(); i++)
	{
		c[tmp1] = a[i];
		tmp1 += 2;
	}
	int tmp2 = 1;
	for (int i = 0; i < b.size(); i++)
	{
		c[tmp2] = b[i];
		tmp2 += 2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
}
