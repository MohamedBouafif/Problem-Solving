#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
bool srt(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.first > b.first);
}
void solve()
{
    int n;
    cin>>n;
    
    vector<pair<ll,ll>> v;
    for(int i = 0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(mp(x,i));
        
    }
    vector<ll> ans(n);
    sort(v.begin(),v.end());
    ll time = 0, dist = 1;
    ll idx = 1;
    for(int i = n - 1;i>=0;i-=2)
    {
        ans[v[i].second ]= idx;
        time += idx*2*(v[i].first);
        idx++;
    }
    idx = 1;
    for(int i = n - 2;i>=0;i-=2)
    {
        ans[v[i].second] = -idx;
        time += idx*2*(v[i].first);
        idx++;
    }
    cout<<time<<endl;
    cout<<0<<" ";
    for(int i = 0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
    
    
    
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