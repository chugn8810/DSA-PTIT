	#include <bits/stdc++.h>
	using namespace std;
	int prime[1000000], m, a[50], luu[50];
	bool used[50];
	vector<string> s;
	void quaylui(int tong, int j, int vitri)
	{

		for (int i = vitri; i < m; i++)
		{
			if (!used[i] && luu[j - 1] < a[i])
			{
				used[i] = true;
				luu[j] = a[i];
				if (j >= 1)
				{
					string t;
					for (int i = 0; i <= j; i++)
					{
						t += to_string(luu[i]);
						t += " ";
					}
					s.push_back(t);
				}
				quaylui(tong + a[i], j + 1, i + 1);
				used[i] = false;
			}
		}
	}
	int main()
	{
		memset(used, false, sizeof(used));
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		quaylui(0, 0, 0);
		sort(s.begin(), s.end());
		for (int i = 0; i < s.size(); i++)
		{
			cout << s[i] << endl;
		}
	}
