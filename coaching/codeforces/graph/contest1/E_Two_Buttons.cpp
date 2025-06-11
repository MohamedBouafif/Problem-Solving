#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6;
vector<int> graph[N];
int ans = INT_MAX;
bool vis[N];
int n,m;

int dfs(int node, int cost){
    vis[node] = 1;
    if(node == m){
        vis[m] = 0; //bech ken fama node e5er yhez lih yil9ah invisited
        ans = min(ans, cost);
        return ans ;
    }
    for(int child:graph[node]){
        if(!vis[child]){
            int res =    dfs(child,cost + 1);
            if(res > 0)return res;
        }
    }
    return  INT_MAX; //tri9 mayawsalnich lil m
}
void solve()
{
    cin>>n>>m;
    if(n>=m){
        cout<<n - m<<endl;
        return;
    }
    for(int i = 1 ;i <= 2*(m -  1);i++){
        if(i - 1 > 0)graph[i].push_back(i - 1);
        if(2*i <= 2*(m - 1))graph[i].push_back(2*i);
    }
    int ans = 0;
    for(int i = n;i<= 2*(m - 1);i++){
        if(!graph[i].empty()){
            ans = min(ans,dfs(i,i - n));}

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
