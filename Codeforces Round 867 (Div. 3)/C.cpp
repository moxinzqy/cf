#include <bits/stdc++.h>
#define int long long
using namespace std;

// 还挺妙哈
void moxin()
{
    int n;
    cin >> n;
    cout << n * n + 2 * (n + 1) << endl; // 应当是分成三部分：1+(1+2+...+n)+(1+2+...+(n+1))
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