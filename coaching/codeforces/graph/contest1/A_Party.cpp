#include <bits/stdc++.h>
using namespace std;
const int N = 2000 + 1;
using ll = long long;
vector<int> graph[N];
int n;
bool vis[N];

int dfs(int node)
{
    if(graph[node].empty())return 1;
    int x = graph[node][0], y = -1;
    int m= 0;
    for(auto child:graph[node]){
        m = max(m,dfs(child));
    }
    return m +1;
    
    

}
void solve()
{
    //graph : {trees}
    cin >> n;
    
    for(int i = 1 ; i <= n;i++){
        int x;
        cin>>x;
        if(x!=-1)
            graph[x].push_back(i);
    }
    int ans = 1;
    for(int i = 1 ; i <= n;i++){
        ans = max(ans,dfs(i));
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
