#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 5;
const int MOD = 998244353;
vector<int> e[maxn];

void moxin()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int x;
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        e[x].push_back(i);
        e[i].push_back(x);
    }
    int ans = 0;
    ans += e[1].size() - 1;
    for (int i = 2; i <= n; i++)
    {
        if (e[i].size() > 2)
            ans += e[i].size() - 2;
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}