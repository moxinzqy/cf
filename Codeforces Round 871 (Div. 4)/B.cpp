#include <bits/stdc++.h>
using namespace std;

// 签到题一道
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}

int a[105];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flg = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            flg = 0;
            while (a[i] == 0 && i <= n)
                i++, flg++;
            ans = max(flg, ans);
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}