#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[55], b[55];

// 签到题
void moxin()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i], a[i] += i - 1;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int ans = -1;
    int pos = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= t)
        {
            if (ans < b[i])
                pos = i, ans = b[i];
        }
    }
    cout << pos << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int q;
    cin >> q;
    while (q--)
    {
        moxin();
    }

    system("pause");
    return 0;
}