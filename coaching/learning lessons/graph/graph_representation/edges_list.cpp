#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<pair<int,int>> edges;
int n,e;//n : noeuds , e : edges
int main(){
    memset(mat, 0,sizeof(mat));
    cin>>n>>e;
    for(int i = 0 ; i <e;i++){
        int na, nb;
        cin>>na>>nb;
        na--;nb--;
        edges.push_back({na,nb});
    }
    for(int i = 0  ; i < e ;i ++){
        cout<<edges[i].first<<" "<<edges[i].second<<endl;   
    }
    return 0;
}//Memory complexity = O(e)
//its good for problems who only cares about edges
