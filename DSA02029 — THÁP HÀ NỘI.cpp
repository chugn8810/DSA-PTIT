#include <bits/stdc++.h>
using namespace std;
int m, n, total = 0, res = 0;
void quaylui(int n, char nguon, char phu, char dich)
{
    if (n == 1)
    {
        cout << nguon << " -> " << dich << endl;
        return;
    }
    quaylui(n - 1, nguon, dich, phu);
    cout << nguon << " -> " << dich << endl;
    quaylui(n - 1, phu, nguon, dich);
}
int main()
{
    cin >> n;
    quaylui(n, 'A', 'B', 'C');
}
