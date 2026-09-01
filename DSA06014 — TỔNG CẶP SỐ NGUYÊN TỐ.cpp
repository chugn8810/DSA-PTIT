#include <bits/stdc++.h>
using namespace std;
vector<int> prime(1000005, 1), luu;
void sang()
{
	prime[0] = prime[1] = 0;
	for (int i = 2; i * i < 1000000; i++)
	{
		if (prime[i] == 1)
			for (int j = i * i; j < 1000000; j += i)
			{
				prime[j] = 0;
			}
	}
}
int main()
{
	sang();
	int t;
	cin >> t;
	while (t--)
	{
		long long m, res = -1;
		cin >> m;
		for (int i = 2; i < m; i++)   
		{
			if (prime[i] == 1 && prime[abs(m - i)] == 1)
			{
				res = i;
				break;	
			}
		}
		if (res != -1)
			cout << res << " " << abs(m - res) << endl;
		else
			cout << res << endl;
	}
}
