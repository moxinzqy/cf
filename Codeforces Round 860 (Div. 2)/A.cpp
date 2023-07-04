#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[105], b[105];

// 挺绕的
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
        int flg = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > a[n] || b[i] > b[n])
                swap(a[i], b[i]);
            if (a[i] > a[n] || b[i] > b[n])
            {
                flg = 1;
                break;
            }
        }
        if (flg)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    system("pause");
    return 0;
}