#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

// 当钱充足时，二进制第k位及前的位数任意组合，所以有2^k种
// 当钱不充足时，所有小于等于k的数都能用二进制表示，所以有k+1种
void moxin()
{
    int n, k;
    cin >> n >> k;
    k = min(k, 30LL);
    cout << min((int)pow(2, k), n + 1) << endl;
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