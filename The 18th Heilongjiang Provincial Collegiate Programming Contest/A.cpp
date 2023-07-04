#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

int qpow(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = a * res % MOD;
        b >>= 1;
        a = a * a % MOD;
    }
    return res;
}

void moxin()
{
    int k;
    cin >> k;
    cout << qpow(2, k - 1) << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}