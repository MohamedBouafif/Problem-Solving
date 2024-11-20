#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll ans = 1;
    
    vector<ll> distances;
    for(int i = 1;i<n;i++)
    {
        if(v[i] - v[i-1] > x)distances.push_back(v[i] - v[i-1]);
    }
    sort(distances.begin(),distances.end());
    n = distances.size();
    for(int i = 0;i<n;i++)
    {
        if(distances[i]> x)
        {
            ll needed;
            ll y = (distances[i])/x;
            if(y*x == distances[i]) needed = y-1;
            else needed = y;
            if(k>= needed ) k-=needed;
            else ans ++;
        }
    }
    cout<<ans<<endl;
    
}

        


int main()
{
        
    int tc;
    tc = 1;
    while(tc--)
    {
        solve();
    }    
        
}