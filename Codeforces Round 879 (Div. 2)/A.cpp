#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e3 + 5;
const int MOD = 998244353;
int a[maxn];

void moxin()
{
    int n;
    cin >> n;
    int flg1 = 0, flg2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            flg1++;
        if (a[i] == -1)
            flg2++;
    }
    int cnt = 0;
    while (1)
    {
        if (flg1 >= flg2 && flg2 % 2 == 0)
            break;
        flg2--, flg1++, cnt++;
    }
    cout << cnt << endl;
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