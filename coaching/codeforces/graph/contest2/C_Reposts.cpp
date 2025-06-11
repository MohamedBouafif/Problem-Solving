#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int  N = 1e6;
vector<int>  adj[N];
bool vis[N];


string lower(string t) {
    for(char& c : t) {
        c = tolower(c);
    }
    return t;
}

int maxDepth(int node,int depth) {
    
    vis[node] = true;
    if(adj[node].empty()){
        return depth+1;
    }
    int ans=0;
    for (int neighbor : adj[node]) {
        if ( !vis[neighbor]) {
            ans=max(ans, maxDepth(neighbor,depth+1));
        }
    }
    return ans;

}
void solve() {
    int n;
    
    cin >> n ;
    memset(vis,false,sizeof(vis));
    int a=1;
    map<string,int>mp;
    for (int i = 0; i < n; i++) {
        string x,y,z;
        cin >> x >>z >> y;
        x = lower(x);
        y = lower(y);
        if(mp[x]==0){
            mp[x]=a;
            a++;
        }
        if(mp[y]==0){
            mp[y]=a;
            a++;
        }

        adj[mp[y]].push_back(mp[x]);

    }
    
    cout<<maxDepth(mp["polycarp"],0)<<endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
     //cin >> t;
    while (t--) solve();
    return 0;
}