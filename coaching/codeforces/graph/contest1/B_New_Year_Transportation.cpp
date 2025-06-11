#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
using ll = long long;
vector<int> graph[N];
int n,k;
bool vis[N];


void dfs(int node)
{
    vis[node] = 1;
    for (auto child : graph[node])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
void solve()
{
    cin >> n>>k;

    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; ++i)
    {
        graph[i].clear();
        
    }

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != -1)
            graph[i].push_back(i + x);
    }
    dfs(1);
    cout << (vis[k] ? "YES\n" : "NO\n");

    
}
int main()
{
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
