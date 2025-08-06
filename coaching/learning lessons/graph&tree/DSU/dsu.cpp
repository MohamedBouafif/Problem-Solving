#include <bits/stdc++.h>
using namespace std;
class DSU{
    public:
        map<int,int> parent;
        map<int,int> rank;
        int n;
        
        DSU(vector<int>& nums){
            for(auto e:nums){
                parent[e] = e;
                rank[e] = 1;
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
                parent[p1] = p2;
                rank[p2]+= rank[p1];
                rank[p1] = 0;
            }else{
                parent[p2] = p1;
                rank[p1]+= rank[p2];
                rank[p2] = 0;
            }
        }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int  n = nums.size();
        if(n==0)return 0;
        int ans = 1; 
        DSU dsu = DSU(nums);
        multiset<int> s;
        for(int i = 0 ; i < n ;i++){
            if(!s.empty()){

                if(s.find(nums[i])!=s.end())continue;

                if(s.find(nums[i] - 1) !=s.end()){
                    dsu.unionn(nums[i] , nums[i] - 1);
                    int p1 = dsu.parent[nums[i]], p2 = dsu.parent[nums[i] - 1];
                    ans = max({dsu.rank[p1], dsu.rank[p2], ans});
                }
                
                if(s.find(nums[i] + 1) !=s.end()){
                    dsu.unionn(nums[i] , nums[i] + 1);
                    int p1 = dsu.parent[nums[i]], p2 = dsu.parent[nums[i] + 1];
                    ans = max({dsu.rank[p1], dsu.rank[p2], ans});
                }
                
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};
