#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll s = 0;
    for(int i : v)s+=i;
    cout<<max(v[0] , (ll)ceil(s/(double)x))<<endl;
}

        


int main()
{
        
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }    
        
}