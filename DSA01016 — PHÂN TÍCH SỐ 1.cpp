#include <bits/stdc++.h>
using namespace std;
int a[50];
int m;
bool check(int j)
{
    for (int i = 0; i < j; i++)
    {
        if (a[i] < a[i + 1])
            return false;
    }
    return true;
}
void quaylui(int j, int limit)
{
    for (int i = limit; i >= 1; i--)
    {
        a[j] = i;
        if (limit - i == 0)
        {
            if (check(j))
            {
                cout << "(";
                for (int k = 0; k <= j; k++)
                {
                    cout << a[k];
                    if (k == j)
                        cout << "";
                    else
                        cout << " ";
                }
                cout << ") ";
            }
        }
        else
        {
            quaylui(j + 1, limit - i);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m;
        quaylui(0, m);
        cout << endl;
    }
}
