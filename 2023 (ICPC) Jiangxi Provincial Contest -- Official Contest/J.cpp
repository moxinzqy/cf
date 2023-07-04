#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 5;
const int inf = 1e18;

// n个函数，m次操作次数
// 主要是不知道怎么存这些函数
struct node
{
    int pos, b;
} nod[maxn];

void moxin()
{
    int n;
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        nod[i].b = x;
        nod[i].pos = i;
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int op;
        cin >> op;
        int a1, b1;
        int a;
        if (op == 0) // 第一种操作 加一个形式为y = (x - a) ^ 2 + b 的函数
        {
            cin >> a1 >> b1;
            if (b1 < nod[a1].b)
                nod[a1].b = b1;
        }
        if (op == 1) // 第二种操作 打印所有二次函数在x = a处的最小函数值
        {
            cin >> a;
            int ans = inf;
            for (int j = max(a - (int)sqrt(n - 1), 1LL); j <= min(a + (int)sqrt(n - 1), n); j++)
            {
                ans = min(ans, (a - j) * (a - j) + nod[j].b);
            }
            cout << ans << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}