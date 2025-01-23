#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin>>n;
    int a[n] , b[n], c[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
        
    int dp[n][3];
    dp[0][0] = a[0] ;
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for(int i = 1; i < n; i++){
        for(int j = 0 ; j<3; j++)
            dp[i][j] = j == 0 ? max(dp[i-1][1],dp[i-1][2]) + a[i] : j==1 ? max(dp[i-1][0],dp[i-1][2]) + b[i] : max(dp[i-1][0],dp[i-1][1]) + c[i];
    }
    cout<<max({dp[n-1][0], dp[n-1][1],dp[n-1][2]});

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
