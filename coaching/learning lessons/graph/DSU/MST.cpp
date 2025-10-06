struct Edge
{
    int u, v, weight;
    Edge(vector<int> w){
        u = w[0] , v = w[1], weight = w[2];
    }
    bool operator<(Edge const &other) const
    {
        return weight < other.weight;
    }
};

class Dsu
{
    public:
        vector<int> parent, rank;
        vector<Edge> edges; // input
        int cost = 0;       //sum of min cost over all adges
        vector<Edge> result; // output
        int n ;
        Dsu(vector<Edge>& v){
            n = v.size();
            parent.resize(n);
            rank.resize(n);
            for(int i = 0 ; i < n;i++){
                make_set(i);
                edges[i] = v[i];
            }
        }
        void make_set(int v)
        {
            parent[v] = v;
            rank[v] = 0;
        }

        int find_set(int v)
        {
            if (v == parent[v])
                return v;
            return parent[v] = find_set(parent[v]);
        }

        
        void union_sets(int a, int b)
        {
            a = find_set(a);
            b = find_set(b);
            if (a != b)
            {
                if (rank[a] < rank[b])
                    swap(a, b);
                parent[b] = a;
                if (rank[a] == rank[b])
                    rank[a]++;
            }
        }

        void reset() {
            cost = 0;
            result.clear();
            for(int i = 0; i < n; i++)
                make_set(i);
        }

        bool MST() {  // Return bool to indicate success/failure
            if (edges.empty()) return false;
            
            reset();  // Reset state before computing MST
            
            sort(edges.begin(), edges.end());
            
            for (const Edge& e : edges) {  // Use const reference
                if (find_set(e.u) != find_set(e.v)) {
                    cost += e.weight;
                    result.push_back(e);
                    union_sets(e.u, e.v);
                    
                    // Early termination when we have n-1 edges
                    if (result.size() == n - 1) {
                        break;
                    }
                }
            }
            
            // Check if we have a valid MST (connected graph)
            return result.size() == n - 1;
        }
        
};

