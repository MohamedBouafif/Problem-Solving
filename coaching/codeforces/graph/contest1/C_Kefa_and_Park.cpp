#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
vector<int> graph[N];
int n, m;
vector<int> cats;

int ans = 0;
void dfs(int node, int current_m, int parent)
{

    if (current_m > m)
        return;

    if (graph[node].size() == 0 && current_m <= m && node != 0) //kenou leaf & mahouch fil house te3ou -> restaurant
    {
        ans++;
    }

    for (int child : graph[node])
    {
        if (child != parent){
            if(cats[child])
                dfs(child, current_m + 1, node);
            else dfs(child, 0, node); //ken famech cat nraja3 lil sfer
        }   
    }
}
void solve()
{
    cin >> n >> m;
    cats.resize(n, 0);
    for (int i = 0; i < n; ++i)
    {
        graph[i].clear();
        cin >> cats[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        
    }
    int c =  0 ; 
    if(cats[c]) c = 1;

    dfs(0, c, -1);
    cout << ans << endl;
}
int main()
{
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
