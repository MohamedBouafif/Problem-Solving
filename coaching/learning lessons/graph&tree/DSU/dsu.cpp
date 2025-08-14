#include <bits/stdc++.h>
using namespace std;
class Dsu{
    public:
        vector<int> parent, rank;
        int n;
        
        Dsu(int k){
            n = k;
            parent = vector<int>(n+1);
            rank = vector<int>(n+1)
            for(int i = 1 ; i<= n;i++){
                parent[i] = i;
                rank[i] = 1;
            }
        }

        int find(int i){
            if(parent[i] != i){
                return parent[i] = find(parent[i]);
            }
            return parent[i] = i;
        }

        void unionn(int a ,int b){
            int p1 = find(a);
            int p2 = find(b);
            
            if(rank[p1] < rank[p2]){
                swap(p1 , p2);
            }
            parent[p2] = p1;
            rank[p1] += rank[p2];
            rank[p2] = 0;
        }
};
