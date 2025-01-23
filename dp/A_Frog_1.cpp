#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int& h:heights) cin>>h;
    int dp[n];
    dp[0] = 0;
    dp[1] = abs(heights[0]-heights[1]);
    for(int i = 2; i < n ; i++)
        dp[i] = min(
                    dp[i-1] + abs(heights[i] - heights[i-1]),
                    dp[i-2] + abs(heights[i] - heights[i-2])
                );
    cout<<dp[n-1]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    // cin >> q;
    while (q--)
    {
        solve();
    }
}
