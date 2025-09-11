#include<bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    int _n;
    vector<vector<bool>> vis;
    vector<vector<int>> shortestPath;
    int dfs(int node)
    {
        if(vis[node][node])
            return shortestPath[node][node];
        vis[node][node] = 1;
        int ans = INT_MAX;
        for(int i = 0 ; i < _n; i++)
        {
            int total_path_cost = 0;
            if(!vis[node][i])
            {
                total_path_cost += shortestPath[node][i] + dfs(i);
                
            }
            
            ans = min(ans , total_path_cost);
        }
        return ans;

    }
    
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        _n = n;
        vis = vector<vector<bool>>(_n,vector<bool>(_n,0));
        shortestPath = vector<vector<int>>(n , vector<int>(n, INT_MAX));
        for(int i = 0 ; i < n ;i++)
        {
            vector<bool> visited(n, 0);
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            shortestPath[i][i] = 0;
            while(!q.empty())
            {
                int parent = q.front();
                q.pop();
                for(int child: graph[parent])
                {
                    if(!visited[child])
                    {
                        visited[child] = 1;
                        shortestPath[i][child] = 1 + shortestPath[i][parent];
                        q.push(child);
                    }
                }
            }
        }
        int ans = INT_MAX;
        for(int i = 0 ; i < n ;i++)
        {
            int node = i;
            ans = min(ans , dfs(node));
        }
        return ans;
    }
};
int main(){
    Solution s = Solution();
    vector<vector<int>> graph = {
        {1, 2, 3},
        {0},
        {0},
        {0}
    };
    cout<<s.shortestPathLength(graph);
}