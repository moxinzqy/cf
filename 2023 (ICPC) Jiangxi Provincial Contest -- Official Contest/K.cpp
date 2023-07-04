#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e6 + 5;
const int MOD = 998244353;
int a[maxn], dif[maxn], ans[maxn];

// 修改操作不会改变差分数组的值，只改变顺序
void moxin()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
        dif[i] = a[i] - a[i - 1], dif[i] *= -1, ans[1] += dif[i];
    sort(dif + 2, dif + n + 1, greater<int>());
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] - dif[i];
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            int x;
            cin >> x;
        }
        if (op == 1)
        {
            int k;
            cin >> k;
            cout << ans[k] << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0); // 有这个就一定得有endl
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}