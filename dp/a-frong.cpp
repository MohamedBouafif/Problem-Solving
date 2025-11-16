#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for(int& x:h)cin >> x;
    vector<int> min_cost(n);
    min_cost[0] = 0;
    min_cost[1] = abs(h[0] - h[1]);
    for(int i = 2; i < n; i++){
        min_cost[i] = min(min_cost[i-1] + abs(h[i] - h[i-1]), min_cost[i-2] + abs(h[i] - h[i-2]));
    }
    cout<<min_cost[n-1]<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}