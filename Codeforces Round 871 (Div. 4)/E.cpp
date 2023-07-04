#include <bits/stdc++.h>
using namespace std;
int mp[1005][1005];
bool vis[1005][1005];
queue<pair<int, int>> q;
int ans;
int n, m;

// 中等题
void bfs(int x, int y)
{
    q.push({x, y});
    vis[x][y] = true;
    while (!q.empty())
    {
        auto u = q.front();
        ans += mp[u.first][u.second];
        q.pop();
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            int x0 = u.first + dx[i];
            int y0 = u.second + dy[i];
            if (!vis[x0][y0] && mp[x0][y0] && x0 > 0 && x0 <= n && y0 > 0 && y0 <= m)
            {
                q.push({x0, y0});
                vis[x0][y0] = true;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i <= n + 1; i++)
            for (int j = 0; j <= m + 1; j++)
                mp[i][j] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                vis[i][j] = false;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> mp[i][j];
        int flg = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (mp[i][j] && (!vis[i][j]))
                {
                    ans = 0;
                    bfs(i, j);
                    flg = max(ans, flg);
                }
            }
        }
        cout << flg << endl;
    }
    system("pause");
    return 0;
}