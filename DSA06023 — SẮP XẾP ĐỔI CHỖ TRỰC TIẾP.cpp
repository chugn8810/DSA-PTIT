#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, tmp = 1;
    cin >> m;
    vector<int> a(m), b;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int check = 0;
         for (int j = i + 1; j < m; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                check = 1;
            }
        }
        if (check == 1)
        {
            cout << "Buoc " << tmp++ << ": ";
            for (int j = 0; j < m; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}
