#include <bits/stdc++.h>
#define int long long
using namespace std;

// 简单到爆炸
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }
    system("pause");
    return 0;
}