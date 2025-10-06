#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class DSU {
public:
    map<ll,ll> parent, rank;
    DSU(ll n) {
        for (ll i = 0; i <= n; i++){
            parent[i] = i;
            rank[i]=1;
        }
    }

    ll find(ll p) {
        if (parent[p] != p)
            parent[p] = find(parent[p]);
        return parent[p];
    }

    void unionn(ll a, ll b) {
        ll pa = find(a), pb = find(b);
        if (pa == pb) return;
        if (rank[pa] < rank[pb]) swap(pa, pb);
        parent[pb] = pa;
        rank[pa] += rank[pb];
        rank[pb] = 0;
    }
};

class Solution {
public:
    int countComponents(vector<int>& nums, int t) {


        sort(nums.begin(), nums.end());
        DSU dsu(nums.back());
 
        for (ll e : nums) {
            if (e <= t ) {
                if(dsu.find(e)==e){
                    for (ll m = e; m <= t; m += e) {
                        dsu.unionn(e,m);
                    }
                }
            }
        }

        set<ll> parents;
        for (ll e : nums){
            parents.insert(dsu.find(e));

        }
        return parents.size();
    }
};

int main(){
    Solution sol ; 
    int t = 75; 
    vector<int> v = {25, 26};
    cout<<sol.countComponents(v,t);
}