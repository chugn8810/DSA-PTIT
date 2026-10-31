#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
const long long MOD = 1e9 + 7;
long long tamgiac[1005][1005];
void daycon()
{
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (j == 0 || i == j)
            {
                tamgiac[i][j] = 1;
            }
            else
            {
                tamgiac[i][j] = (tamgiac[i - 1][j - 1] + tamgiac[i - 1][j]);
            }
        }
    }
}
int main()
{
    daycon();
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        cout << tamgiac[a + b][b] << endl;
    }
}
