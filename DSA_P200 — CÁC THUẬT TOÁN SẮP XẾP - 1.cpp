#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}
