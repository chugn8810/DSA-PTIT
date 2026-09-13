#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
const long long MOD = 1e9 + 7;
int tamgiac[1005][1005];
long long so[1005];
void daycon()
{
    so[1] = so[0] = 1;
    for (int i = 1; i < 1000; i++)
    {
        so[i] = (so[i - 1] * (i % MOD)) % MOD;
    }
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                tamgiac[i][j] = 1;
            }
            else
            {
                tamgiac[i][j] = (tamgiac[i - 1][j - 1] + tamgiac[i - 1][j]) % MOD;
            }
        }
    }
}
int main()
{
    int m;
    cin >> m;
    daycon();
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        cout << (tamgiac[a][b] * so[b]) % MOD << endl;
    }
}
