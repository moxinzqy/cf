#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e6 + 5;
const int MOD = 998244353;
int a[maxn], dp[maxn];

// isdigit() 功能：
// 判断输入字符是否为0~9的数字
// 是则返回true
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch = getchar()))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch = getchar()))
    {
        x = x * 10 + ch - '0';
    }
    return x * f;
}

void moxin()
{
    int k;
    k = read();
    int ans = 0, sum = 0;
    for (int i = 1; i <= k; i++)
        a[i] = read();
    int n, m, x;
    n = read(), m = read(), x = read();
    dp[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        a[i] %= m;
        dp[i] = dp[i - 1] + a[i]; // 前缀和记录
    }
    sum = (n / k) * dp[k] + dp[n % k]; // n[n]得用sum代替，因为n会爆出数组大小
    sum += x % m;
    ans += n - sum / m;
    printf("%lld", ans);
}

signed main()
{
    moxin();
    system("pause");
    return 0;
}
