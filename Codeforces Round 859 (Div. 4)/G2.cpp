#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5; // 就改了个数据，无语
int a[maxn], sum[maxn];

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
        int cnt = 0;
        int flg = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                cnt++;
        }
        if (n == 1 && a[1] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (n == 1 && a[1] == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
            if (sum[i - 1] < a[i] && i != 1)
            {
                flg = 1;
                break;
            }
        }
        if (flg == 0 && cnt >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    system("pause");
    return 0;
}
