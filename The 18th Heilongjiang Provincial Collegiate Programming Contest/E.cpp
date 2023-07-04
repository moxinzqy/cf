#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

// 能不能做一个1-n的全排列暴力枚举呢？
void moxin()
{
    double n, m;
    scanf("%lf%lf", &n, &m);
    // 有m条线跟最后一条争
    if (n != m)
        printf("%.10lf", 1.0 / (m + 1.0));
    else
        printf("%.10lf", 1.0 / m);
}

signed main()
{
    moxin();
    system("pause");
    return 0;
}