#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> heights(n);
    for(int& h:heights) cin>>h;
    int dp[n][k] ; //dp[i][j] : minimum cost to get to pos i by doing a jump with length at most j
    for(int i = 0 ; i < k ; k++)dp[0][i]  = 0;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0; j < min(i,k) ;j++)
            {
                if(j==0)
                    dp[i][j] = dp[i-1][k-1] + abs(h[i] - h[i-1]);
                else
                    dp[i][j] = min(dp[i][j-1], dp[i - (j+1)][k - 1] + abs(h[i - (j+1)] - h[i]));
            }

            for(int  j = i; j < k;j++)  
                dp[i][j] = dp[i][i-1];
        }
    cout<<dp[n-1][k-1];

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
