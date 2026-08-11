#include <bits/stdc++.h>
using namespace std;
int m, n;
long long res = 0;
int a[1001], b[1001], vitri[1001];
bool dadung[1000] = {false};
void sinh(int j)
{
	for (int i = 1; i <= m; i++)
	{
		if (!dadung[i])
		{
			dadung[i] = true;
			if (j == n && a[i] > b[j - 1] && vitri[a[i]] > vitri[b[j - 1]])
			{
				res += 1;
			}
			if (a[i] > b[j - 1] && vitri[a[i]] > vitri[b[j - 1]])
			{
				b[j] = a[i];
				sinh(j + 1);
			}
		}
		dadung[i] = false;
	}
}
int main()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
		vitri[a[i]] = i;
	}
	sinh(1);
	cout << res;
}
