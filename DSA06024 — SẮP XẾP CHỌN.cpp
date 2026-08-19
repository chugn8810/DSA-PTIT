#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, tmp = 1;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        int vitri = i;
        for (int j = i + 1; j < m; j++)
        {
            if (a[vitri] > a[j])
            {
                vitri = j;
            }
        }

        swap(a[i], a[vitri]);
        cout << "Buoc " << tmp++ << ": ";
        for (int j = 0; j < m; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
