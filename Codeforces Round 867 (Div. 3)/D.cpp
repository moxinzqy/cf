#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e3 + 5;
int a[maxn], sum[maxn];
map<int, int> mp;

// 不能真用next_permutation 时间复杂度O(n!)大大超出
// 其实可以先用next_permutation得出一般规律：
// 奇数位递减2，偶数位递增2的数列符合这一条件
// 也挺妙的
void moxin()
{
    int n;
    cin >> n;
    if (n != 1 && n & 1)
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 1)
        cout << 1 << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i - 1 << " ";
            else
                cout << n - i + 1 << " ";
        }
        cout << endl;
    }
}

signed main()
{
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