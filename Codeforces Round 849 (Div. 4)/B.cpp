#include <bits/stdc++.h>
#define int long long
using namespace std;

// 秒了 测试一下修改
void moxin()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x0 = 0, y0 = 0;
    for (auto x : s)
    {
        if (x == 'L')
            x0--;
        if (x == 'R')
            x0++;
        if (x == 'U')
            y0++;
        if (x == 'D')
            y0--;
        if (x0 == 1 && y0 == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        moxin();
    }
    system("pause");
    return 0;
}
