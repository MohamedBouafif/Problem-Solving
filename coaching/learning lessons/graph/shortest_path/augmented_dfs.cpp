#include <bits/stdc++.h>
using namespace std;

const int N = 1e5, INF = 1e6;

bool visited[N];
vector<int> graph[N];
int dist[N];

void augmented_dfs(int source , int dist)
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    dist[source] = 0;
    while(!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int child : graph[parent])
        {
            if(!visited[child])
            {
                visited[child] = 1;
                q.push(child);
                dist[child] = dist[parent] + 1;
            }

        }
    }
}

int main()
{
    memset(visited, 0, sizeof visited);
    for(int i = 0 ; i < N;i++)
        dist[i] = INF;
    //augmented_dfs(int source , int dist);
    return 0;
}

