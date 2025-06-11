#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> graph[N];
using ll = long long;
ll costs[N];
bool vis[N];


ll  dfs(int node)
{

    vis[node] = 1;
    ll min_cost = costs[node];
    for(int i = 0 ; i < graph[node].size();i++){
        if(!vis[graph[node][i]]){
            min_cost = min(dfs(graph[node][i]),min_cost); 
        }
    }
    return min_cost;

}
void solve()
{
    int m, n;   
    cin >> m >> n;
    //m is the number of nodes and n is the number of edges
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < m; ++i)
    {
        cin >> costs[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    ll ans= 0;

    for(int i = 0; i < m;i++ ){
        
        if(!vis[i]){
            ans+= dfs(i);
        }

    }
    cout<<ans<<endl;
    
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
