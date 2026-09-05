#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string soamax = a, sobmax = b, soamin = a, sobmin = b;
    for (int i = 0; i < a.size(); i++)
    {
        if (soamax[i] == '5')
        {
            soamax[i] = '6';
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (soamin[i] == '6')
        {
            soamin[i] = '5';
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (sobmax[i] == '5')
        {
            sobmax[i] = '6';
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (sobmin[i] == '6')
        {
            sobmin[i] = '5';
        }
    }
    int samax = stoi(soamax), samin = stoi(soamin);
    int sbmax = stoi(sobmax), sbmin = stoi(sobmin);
    cout << samin + sbmin << " " << sbmax + samax;
}
