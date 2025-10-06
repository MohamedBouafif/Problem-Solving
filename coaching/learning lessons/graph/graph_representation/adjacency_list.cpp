#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<int> graph[N];
int n,e;//n : noeuds , e : edges
int main(){
    memset(mat, 0,sizeof(mat));
    cin>>n>>e;
    for(int i = 0 ; i <e;i++){
        int na, nb;
        cin>>na>>nb;
        na--;nb--;
        graph[na].push_back(nb);
    }
    for(int i = 0  ; i < n ;i ++){
        for(int j = 0 ; j < graph[i].size() ;j++){
            cout<<graph[i][j]<<" ";
        }cout<<"\n";
    }
    return 0;
}//Memory Complexity  = O(n + e) // kol noeud bch yzidlik case fil memory
//its good if u want to know the child a specefic node -> o(e) 
