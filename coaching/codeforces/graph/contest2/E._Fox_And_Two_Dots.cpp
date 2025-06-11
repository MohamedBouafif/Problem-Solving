#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;

const int N = 5e2;
bool vis[N][N];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int  n , m;
vector<vector<char>> mat;

bool safe(int x, int y)
{
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= m - 1)
        return true;
    return false;
}

bool dfs(int i, int j, int px, int py)
{
    if(vis[i][j])return true;
    vis[i][j] = 1;
    bool res= 0;
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k], y = j + dy[k];
        if (safe(x, y) && mat[x][y] == mat[i][j] && (x!= px || y!= py))
        {
            res |= dfs(x,y, i , j);
        }
    }
    return res;
}

void solve()
{
    cin >> n >> m;
    mat = vector<vector<char>>(n,vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && dfs(i,j, -1, -1)){
                cout<<"Yes\n";
                return ;
            }
        }
    }
    cout<<"No\n";
}
int main()
{
    int t;
    // cin >> t;
t= 1;
    while (t--)
    {
        solve();
    }
}
