#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int a;
        cin >> a;
        vector<int> s1(a);
        for (int i = 0; i < a; i++)
        {
            cin >> s1[i];
        }
        sort(s1.begin(), s1.end());
        int tro1 = 0, tro2 = s1.size() - 1;
        while (tro1 <= tro2)
        {
            if (tro1 != tro2)
                cout << s1[tro2] << " " << s1[tro1] << " ";
            else
                cout << s1[tro2];
            tro1++;
            tro2--;
        }
        cout << endl;
    }
}
