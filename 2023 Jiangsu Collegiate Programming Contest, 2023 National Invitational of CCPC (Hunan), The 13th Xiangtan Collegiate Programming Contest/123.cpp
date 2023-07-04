#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 5;
const int MOD = 998244353;
int a[maxn];

void moxin()
{
    int n, m;
    cin >> n >> m;
    vector<int> b;
    int sum = 0, cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] >= 0)
        {
            b.push_back(a[i] * (n - i + 1));
        }
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for (auto x : b)
    {
        cnt++;
        ans += x;
        if (cnt == m)
            break;
    }
    cout << sum - ans << endl;
}

signed main()
{
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        moxin();
    system("pause");
    return 0;
}