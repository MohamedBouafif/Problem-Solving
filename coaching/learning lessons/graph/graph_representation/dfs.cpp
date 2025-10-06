#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> graph[N];//list dadjacence
bool vis[N];
void dfs(int pos){ //position de depart ili hya noeuds de depart
    vis[pos] = true;
    for(int i = 0 ; i < graph[pos].size();i++){
        if(!vis[graph[pos][i]])
            dfs(graph[pos][i]);
    }
    return;
}
int main(){
    memset(vis, false, sizeof(vis));
    v.clear();
}