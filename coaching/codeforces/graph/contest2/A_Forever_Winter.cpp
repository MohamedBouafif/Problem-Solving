#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5;
vector<int> graph[N];
bool vis[N], checked[N];

int max_depth(int node)
{
    vis[node] = 1;
    if (graph[node].size() == 1)
    {
        return 1;
    }
    int depth = 0;
    for (int i = 0; i < graph[node].size(); i++)
    {
        if (!vis[graph[node][i]])
        {
            depth = max(max_depth(graph[node][i]) + 1, depth);
        }
    }
    return depth;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    memset(vis, false, sizeof(vis));
    memset(checked, false, sizeof(checked));
    for (int i = 1; i <= n; i++)
    {
        graph[i].clear();
    }
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int central_node = -1;
    for (int node = 1; node <= n; node++)
    {
        for(int i = 1;i<=n;i++)vis[i] = 0;
        if(max_depth(node) == 3)
        {
            central_node = node;
            break;
        }
   
    }
    int x = graph[central_node].size();
    int y = graph[graph[central_node][0]].size() - 1;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}