#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
int a[maxn];

// ans=min(正区间个数+1,负区间个数)
void moxin()
{
    int n;
    cin >> n;
    int sum = 0;
    int pflg = 0, nflg = 0; // positive and negative
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum += abs(a[i]);
    for (int i = 1; i <= n;)
    {
        if (a[i] < 0)
        {
            nflg++;
            while (a[i] <= 0)
                i++;
        }
        else if (a[i] > 0)
        {
            pflg++;
            while (a[i] >= 0)
                i++;
        }
        else
            i++;
    }
    cout << sum << " " << min(pflg + 1, nflg) << endl;
}

signed main()
{
    // ios::sync_with_stdio(0);
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