#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2050;
int f[N][N], ans[1000010];

// 难题！！！
signed main()
{
    f[1][1] = 1, ans[1] = 1;
    int k = 2;
    for (int i = 2; i <= 2023; ++i)
    {
        for (int j = 1; j <= i && k <= 1000000; j++, k++)
        {
            f[i][j] = 1ll * k * k + f[i - 1][j] + f[i - 1][j - 1] - f[i - 2][j - 1];
            ans[k] = f[i][j];
        }
    }
    int t, x;
    cin >> t;
    while (t-- && cin >> x)
        cout << ans[x] << "\n";
    return 0;
}