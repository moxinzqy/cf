#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[105];
int odd, even;

// 签到题
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        odd = 0, even = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
                odd += a[i];
            else
                even += a[i];
        }

        if (even > odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}