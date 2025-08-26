#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class DSU{
    public:
        int n;
        vector<ll> parent, rank;
        
        DSU(vector<ll>& cost){
            n = cost.size() - 1; 
            parent = vector<ll>(n + 1);
            rank = vector<ll>(n + 1);
            for(int i = 1; i <= n; i++)
            {
                parent[i] = i;
                rank[i] = cost[i];
            }
        }

        int find(int node)
        {
            if(parent[node] == node)
                return node;
            return parent[node] = find(parent[node]); 
        }

        void unionn(int node1, int node2)
        {
            int p1 = find(node1), p2 = find(node2); 
            if(p1 == p2)
                return;
            
            if(rank[p1] < rank[p2])
                swap(p1, p2);
            parent[p2] = p1;
            rank[p1] = min(rank[p1], rank[p2]); 
        }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> cost(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    
    DSU dsu(cost);
    
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu.unionn(u, v);
    }
    
    ll ans = 0;
    
    for(int i = 1; i <= n; i++)
    {
        int root = dsu.find(i);
        if(root == i) 
        {
            ans += dsu.rank[i];
        }
    }
        
    cout << ans << endl;
    return 0;
}

