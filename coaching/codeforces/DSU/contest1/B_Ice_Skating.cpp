#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;

class DSU {
    public:
    map<int, int> parent, rank;
    
    int find(int node) {
        if (parent.find(node) == parent.end()) {
            parent[node] = node;
            rank[node] = 0;
        }
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node]);
    }

    void unionn(int node1, int node2) {
        int p1 = find(node1), p2 = find(node2);
        if (p1 == p2)
            return;

        if (rank[p1] < rank[p2])
            swap(p1, p2);
        parent[p2] = p1;
        if (rank[p1] == rank[p2])
            rank[p1]++;
    }
    
    bool connected(int node1, int node2) {
        return find(node1) == find(node2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pi> points(n);
    
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    DSU dsu;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (points[i].first == points[j].first || points[i].second == points[j].second) {
                dsu.unionn(i, j); 
            }
        }
    }
    
    int components = 0;
    for (int i = 0; i < n; i++) {
        if (dsu.find(i) == i) {
            components++;
        }
    }
    
    cout << max(0, components - 1) << endl;
    
    return 0;
}