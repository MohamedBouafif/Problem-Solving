#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    ll MOD = 1e9 +7;
    cin>>n>>k;
    ll ans = 1;
    for(int i = 1;i<=k;i++)
    {
        ans = (ans*n)%MOD;
    }
    
    cout<<ans <<endl;
    
}
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}