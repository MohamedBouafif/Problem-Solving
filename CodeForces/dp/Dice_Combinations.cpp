#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
long long MOD = 1e9 + 7;
void solve()
{ 
    int n;
    cin>>n;
    long long dp[n+6] = {0};
    
    dp[0] = 1;//there is only one way to get to sum = 0
    for(int i = 0; i < n;i++)
    {
        //from the sum that im having so far i can construct : sum + 1 to sum + 6
        for(int x = 1; x<=6 ; x++)
            dp[i+x] = (dp[i] + dp[i+x])%MOD;
    }
    cout<<dp[n];


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
