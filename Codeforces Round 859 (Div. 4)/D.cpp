#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
int a[maxn], sum[maxn];

// 简单+
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

signed main()
{
    int t;
    t = read();
    while (t--)
    {
        int n, q;
        n = read(), q = read();
        for (int i = 1; i <= n; i++)
            a[i] = read(), a[i] %= 10, sum[i] = a[i] + sum[i - 1];

        for (int i = 1; i <= q; i++)
        {
            int l, r, k;
            l = read(), r = read(), k = read();
            if (k & 1)
                k = 1;
            else
                k = 0;
            int flg = sum[n] - (sum[r] - sum[l - 1]) + k * (r - l + 1);
            if (flg & 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}