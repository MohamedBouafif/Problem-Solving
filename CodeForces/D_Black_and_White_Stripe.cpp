#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cum_sum[n+1]={0};
    for(int i = 1;i<=n;i++)
    {
        if(s[i-1]=='W') cum_sum[i]+=cum_sum[i-1] + 1;
        else cum_sum[i] = cum_sum[i-1];
    }
    int ans = 2e5;
    for(int i  = k;i<=n;i++)
    {
        int cost = cum_sum[i] - cum_sum[i - k];
        ans = min(ans,cost);
    }
    cout<<ans<<endl;
}
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}