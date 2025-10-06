#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pp = pair<ll,ll> ;
using pb = push_back; 
const ll N = 1e5 + 7, INF = (ll)(1e18);

vector<vector<pp>> graph ; 
int n,m;

void dijkistra(int node)
{
    priority_queue<pp, vector<pp>, greater<pp>> min_pq; //par defaut yraja3 lekbir donc ne9lbou
    for(int i = 0 ; i < n ;i++)
    {
        if(i == node)
            dist[node] = 0;
        else 
            dist[i] = INF;

    }
    pq.push({dist[node], node});

    while(!pq.empty())
    {
        pp parent = pq.top();
        pq.pop();

        if(parent.first > dist[parent.second]) //ken ditance mte3 current node a5yeb min distance minimal zeyed nexploity fih 
            continue; 
        for(auto childPair:graph[parent.second])
        {
            ll child = childPair.first;
            ll d = childPair.second;

            if(dist[child] > dist[parent] + d )
            {
                dist[child] = dist[parent] + d;
                pq.push({dist[child], child});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    graph.resize(n);
    int a,b,d;
    while(m--)
    {
        cin >> a>> b >> d;
        a--;
        b--;
        graph[a].pb({b,d});
        graph[b].pb({a,d});
    }

}
