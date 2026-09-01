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
		set<char> st;
		for (int i = 0; i < m; i++)
		{
			string s;
			cin >> s;
			for (int i = 0; i < s.size(); i++)
			{
				st.insert(s[i]);
			}
		}
		for (auto it : st)
		{
			cout << it << " ";
		}
		cout << endl;
	}
}
