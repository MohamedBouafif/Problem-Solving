#include <bits/stdc++.h>
using namespace std;
class DSU{
    public:
        vector<vector<pair<int,int>>> parent;
        vector<vector<int>> rank;
        int n;
        
        DSU(vector<vector<int>> & nums){
            n = nums.size();
            parent = vector<vector<pair<int,int>>>(n, vector<pair<int,int>>(n));
            rank = vector<vector<int>>(n , vector<int>(n,0));
            for(int i =  0 ; i < n ;i++){
                for(int j = 0 ; j < n;j++){
                    parent[i][j] = {i, j};
                    if(nums[i][j]) rank[i][j] = 1;
                }
            }
        }

        int find(int i, int j ){
            if(parent[i][j] != {i , j}){
                return parent[i] = find(parent[i]);
            }
            return parent[i][j] = {i , j};
        }

        void unionn(pair<int,int> a ,pair<int,int>b){
            pair<int,int> p1 = find(a.first,a.second);
            pair<int,int> p2 = find(b.first,b.second);
            
            if(rank[p1.first][p1.second] < rank[p2.firt][p2.second]){
                parent[p1.first][p1.second] = p2;
                rank[p2.firt][p2.second]+= rank[p1.first][p1.second] ;
                rank[p1.first][p1.second]  = 0;
            }else{
                parent[p2.firt][p2.second] = p1;
                rank[p1.first][p1.second]+= rank[p2.firt][p2.second];
                rank[p2.firt][p2.second]= 0;
            }
        }
};
class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int largestIsland(vector<vector<int>>& grid) {
        DSU d(grid);
        int n = grid.sieze();
        int ans = 0;
        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < n;j++)
            {
                if(grid[i][j])
                {
                    for(int k  = 0 ; k < 4 ;k++){
                        int xk = i + dx[k], yk = j + dk[k];
                        pair<int,int> p1 = {i , j} , p2 = {xk, yk};
                        if(xk >= 0 && xk < n && yk >= 0 && yk < 0 && grid[xk][yk]){
                            d.unionn(p1 , p2);
                        }
                    }
                } 
            }
        }
        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < n;j++){
                if(!grid[i][j]){
                    for(int k  = 0 ; k < 4 ;k++){
                        int xk = i + dx[k], yk = j + dk[k];
                        pair<int,int> p1 = {i , j} , p2 = {xk, yk};
                        if(xk >= 0 && xk < n && yk >= 0 && yk < 0 && grid[xk][yk]){
                            ans = max(ans , d.rank[xk][yk] + 1);
                        }
                    } 
                }
            }
        }
    }
};
