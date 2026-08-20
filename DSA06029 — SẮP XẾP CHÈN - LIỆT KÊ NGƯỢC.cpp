#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, tmp = 0;
	cin >> m;
	vector<int> a(m), b;
	vector<string> s;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (b.empty())
		{
			b.push_back(a[i]);
		}
		else
		{
			int k = b.size() - 1;
			while (k >= 0 && a[i] < b[k])
			{
				k--;
			}
			b.insert(b.begin() + k + 1, a[i]);
		}
		string xau;
		xau += "Buoc ";
		xau += to_string(tmp++);
		xau += ": ";
		for (int j = 0; j < b.size(); j++)
		{
			xau += to_string(b[j]);
			xau += " ";
		}
		s.push_back(xau);
	}
	for (int i = s.size() - 1; i >= 0; i--)
	{
		cout << s[i] << endl;
	}
}
