#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int mat[N][N];
int n,e;//n : noeuds , e : edges
int main(){
    memset(mat, 0,sizeof(mat));
    cin>>n>>e;
    for(int i = 0 ; i <e;i++){
        int na, nb;
        cin>>na>>nb;
        na--;nb--;
        mat[na][nb] = 1;
    }
    for(int i = 0  ; i < n ;i ++){
        for(int j = 0 ; j < n ;j++){
            cout<<mat[i][j]<<" ";
        }cout<<"\n";
    }
    return 0;
}//Memory complexity = O(N*N)
//good for graphs that have many edges (nb of edges --> n*n ) 5ater toutes les methodes bch yaatiw nafs lhaja
//good for problems that asks about relation ships between nodes (matrix[n1][n2] = 0 ->no relation o(1))