#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
int a[55];

void moxin()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n / 2; i++)
        sum1 += a[i];
    for (int i = ceil((double)n / 2) + 1; i <= n; i++) // 使用ceil函数时最好是先将里面的数转换成浮点数
        sum2 += a[i];
    cout << sum2 - sum1 << endl;
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