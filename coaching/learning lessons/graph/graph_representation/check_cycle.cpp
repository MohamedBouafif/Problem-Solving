

/*
    for directed graphs we have to check if the node is visited & incestor 
    for indirected graphs we have to check only if its visited and the child is visited and its not the parent
    for directed graphs ken fle5er il incestor vector is all false that means that there is no cycle in the graph
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> graph[N];//list dadjacence
bool vis[N];
bool inc[N];
bool dfs_directed (int pos){ //position de depart ili hya noeuds de depart
    vis[pos] = true;
    ans[pos] = true;
    for(int i = 0 ; i < graph[pos].size();i++){
        int next_node = graph[pos][i];
        if(vis[next_node] && anc[next_node]) 
            return true;
        else if (!vis[next_node] && dfs_directed(next_node)) // ken node mahouch visited ama ki nvisitih howa nil9a cycle
            return true;
    }
    //ken mal9itch cycle w wfew child nodes lezem nraja3 false il node te3i
    ans[pos] = false;
    //ken t3adina 3al nodes lkol wmal9inech cycle 
    return false;
}
bool dfs_undirected(int pos, int parent){
    vis[pos] = true;
    for(int i = 0 ; i < graph[pos].size();i++){
        int next_node = graph[pos][i];
        if(vis[next_node] && x != pos) 
            return true;
        else if (!vis[next_node] && dfs_undirected(next_node)) // ken node mahouch visited ama ki nvisitih howa nil9a cycle
            return true;
    }
    return false;
}
int main(){
    memset(vis, false, sizeof(vis));
    v.clear();
}