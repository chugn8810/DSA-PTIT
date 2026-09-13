#include <bits/stdc++.h>
using namespace std;
long long a[1005];
void sudung()
{
    a[0] = 1;
    int p1 = 0, p2 = 0, p3 = 0;
    for (int i = 1; i < 1005; i++)
    {
        long long tmp1 = a[p1] * 2;
        long long tmp2 = a[p2] * 3;
        long long tmp3 = a[p3] * 5;
        a[i] = min(tmp1, min(tmp2, tmp3));
        if (a[i] == tmp1)
            p1++;
        if (a[i] == tmp2)
            p2++;
        if (a[i] == tmp3)
            p3++;
    }
}
int main()
{
    int m;
    cin >> m;
    sudung();
    while (m--)
    {
        int n;
        cin >> n;
        cout << a[n - 1] << endl;
    }
}
