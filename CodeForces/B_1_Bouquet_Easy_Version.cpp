#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll i = 0, j= 0, s= 0, ans = 0;
    while(i<n)
    {
        s+= v[i];
        while((v[i] - v[j] >1 || s>m)&&j<n)
        {
            s-=v[j];
            j++;
        }
        if(s<=m) ans=max(ans,s);
        
        i++;
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