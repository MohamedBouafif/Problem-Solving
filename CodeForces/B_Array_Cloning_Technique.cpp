#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    ll m = 0;
    for(ll i = 0; i < n;i++){cin>>a[i]; mp[a[i]]++;m=max(m,mp[a[i]]);}
    ll cnt = m;
    //cout<<"cnt="<<cnt<<endl;
    ll ans = cnt;
    ll clone = 0;
    while(cnt!=n)
    {
        clone++;
        cnt+=min(cnt,n-cnt);
        
    }
    cout<<cnt-ans+clone<<endl;
    


}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}