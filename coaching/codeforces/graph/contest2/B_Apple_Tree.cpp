#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6;
vector<int> graph[N];
bool vis[N], checked[N];
map<int,ll> mp;
ll nb_pairs(int node)
{
    vis[node] = 1;
    if (graph[node].size() == 1 && node != 1)
    {
        mp[node] = 1;
        return 1;
    }
    ll cnt = 0;
    for (int i = 0; i < graph[node].size(); i++)
    {
        if (!vis[graph[node][i]])
        {
            cnt += nb_pairs(graph[node][i]);
        }
    }
    mp[node] = cnt;
    return cnt ;
}
void solve()
{
    int n;
    cin >> n;
    
    mp.clear();
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        graph[i].clear();
    }
    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    nb_pairs(1);
    int q;
    cin>>q;
    // for(auto e:mp){
    //     cout<<e.first<<" "<<e.second<<endl;
    // }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<mp[x]*mp[y]<<endl;
    }
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
