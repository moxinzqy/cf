#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 5;
const int MOD = 998244353;
int xl[maxn], yl[maxn], zl[maxn], xr[maxn], yr[maxn], zr[maxn];

void moxin()
{
    int w, h, l;
    cin >> w >> h >> l;
    int n;
    cin >> n;
    int flg = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> xl[i] >> yl[i] >> zl[i] >> xr[i] >> yr[i] >> zr[i];
        if (xl[i] == 0 && yl[i] == 0 && zl[i] == 0)
            flg++;
        if (xr[i] == w && yr[i] == h && zr[i] == l)
            flg++;
    }
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