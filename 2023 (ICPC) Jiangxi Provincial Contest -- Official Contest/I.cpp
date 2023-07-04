#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 5e5 + 5;
int ans[maxn];

// 该死，原来不是图论
// 但是图论还是要学的
void moxin()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        ans[u] ^= w;
        ans[v] ^= w;
    }
    for (int i = 1; i <= q; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int x, y, z;
            cin >> x >> y >> z;
            ans[x] ^= z;
            ans[y] ^= z;
        }
        if (op == 2)
        {
            int x;
            cin >> x;
            cout << ans[x] << endl;
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