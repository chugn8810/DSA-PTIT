#include <bits/stdc++.h>
using namespace std;
void test()
{
    long long n;
    cin >> n;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string s = q.front();
        long long tmp = stoll(s);
        q.pop();
        if (tmp % n == 0)
        {
            cout << tmp;
            return;
        }
        q.push(s + "0");
        q.push(s + "1");
    }
    cout << res + q.size();
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        test();
        cout << "\n";
    }
    return 0;
}
