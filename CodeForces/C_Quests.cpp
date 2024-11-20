#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,k;
    cin>>n>>k;
    ll a[n] , b[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    for(int i  = 0;i<n;i++)cin>>b[i];
    ll ans = 0;
    ll B =  0 ;
    ll s = 0;
    for(int i = 0;i<min(n,k);i++)
    {
        s+= a[i];
        B = max(B,b[i]);
        ans = max(ans, s + (k - i - 1)*B);
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