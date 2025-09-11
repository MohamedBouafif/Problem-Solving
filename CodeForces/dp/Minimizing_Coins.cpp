#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
long long MOD = 1e9 + 7;
void solve()
{ 
    int n,target;
    cin>>n>>target;
    vector<int> c(n);
    for(int& x: c)cin>>x;
    sort(c.begin(), c.end());
    ll infinity = 1e18;
    vector<ll> dp(target+1,infinity);
    dp[0] = 0;
    for(int i = 1  ; i <= target; i++){
        for(int j = 0; j < n && i - c[j] >=0; j++){
            dp[i] = min(dp[i] , dp[i-c[j]] + 1);
        }
    }
    ll ans =  dp[target] >= infinity ? -1 : dp[target];
    cout<<ans;


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
