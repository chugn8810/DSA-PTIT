#include <bits/stdc++.h>
using namespace std;
int b[25];
int m, n;
set<int> st;
void sinh()
{
    int dem = 1, so = st.size();
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    for (int j = 0; j < m; j++)
    {
        cout << b[a[j]] << " ";
    }
    cout << endl;
    int i = m - 1;
    while (i > -1)
    {
        i = m - 1;
        while (i >= 0 && a[i] == so - m + i + 1)
        {
            i--;
        }
        if (i == -1)
            break;
        a[i] += 1;
        for (int j = i + 1; j < m; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int j = 0; j < m; j++)
        {
            cout << b[a[j]] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int dem = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    for (auto it : st)
    {
        b[dem] = it;
        dem++;
    }
    sinh();
}
