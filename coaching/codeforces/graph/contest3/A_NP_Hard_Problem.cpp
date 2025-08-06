#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 1;
vector<int> graph[N];
set<int> s1, s2;
int colors[N] = {0};
bool dfs(int node, int color)
{
    colors[node] = color;
    for (int child : graph[node])
    {
        if (!colors[child])
        {
            if (!dfs(child, -1 * color))
                return false;
        }
        else if (colors[child] == colors[node])
            return false;
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!colors[i])
        {
            if (!dfs(i, 1))
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    for (int j = 1; j <= n; j++)
    {
        if (colors[j] == 1)
            s1.insert(j);
        else if (colors[j] == -1)
            s2.insert(j);
    }

    cout << s1.size() << endl;
    for (auto e : s1)
        cout << e << " ";
    cout << endl
         << s2.size() << endl;
    for (auto e : s2)
        cout << e << " ";
    cout << endl;
}
int main()
{
    int t;

    t = 1;

    while (t--)
    {
        solve();
    }
}
