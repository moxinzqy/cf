#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[2000005], pref[2000005];

// 交互式题目，很有意思
void moxin()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i], pref[i] = pref[i - 1] + a[i];
    }
    int l = 1, r = n, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        cout << "? " << (mid - l + 1) << " ";
        for (int i = l; i <= mid; i++)
        {
            cout << i << " ";
        }
        cout << endl
             << flush;
        int x;
        cin >> x;
        if (x == pref[mid] - pref[l - 1])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
            ans = mid;
        }
    }
    cout << "! " << ans << endl
         << flush;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        moxin();
    }
    system("pause");
}