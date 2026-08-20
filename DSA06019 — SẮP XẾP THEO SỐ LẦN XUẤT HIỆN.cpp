#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> b;
        set<int> s;
        for (auto &i : a)
        {
            cin >> i;
            b[i]++;
            s.insert(i);
        }
        a.clear();
        int i = 0;
        while (i <= n)
        {
            int max = 0, vitri = -1;
            for (auto j : s)
            {
                if (b[j] > max && b[j] != 0)
                {
                    max = b[j];
                    vitri = j;
                }
            }
            if (vitri != -1)
            {
                while (b[vitri] > 0)
                {
                    a.push_back(vitri);
                    b[vitri]--;
                    i++;
                }
            }
            else
            {
                break;
            }
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
