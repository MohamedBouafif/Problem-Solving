#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int& x:h)cin >> x;
    vector<int> min_cost(n);
    min_cost[0] = 0;
    min_cost[1] = abs(h[0] - h[1]);
    for(int i = 2; i < n; i++){
        int current_min_cost = 1e9;
        for(int j = 1; j <=k && i - j>=0; j++){
            current_min_cost = min(min_cost[i-j] + abs(h[i] - h[i-j]), current_min_cost);
        }
        min_cost[i] = current_min_cost;
    }
    cout<<min_cost[n-1]<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}