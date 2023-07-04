#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

void moxin()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n >= 1)
    {
        sum += n;
        n /= 2;
    }
    cout << sum << endl;
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