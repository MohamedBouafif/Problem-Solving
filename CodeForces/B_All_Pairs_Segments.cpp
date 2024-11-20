#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    map<ll,ll> mp;
    
    for(int i  = 0;i<n;i++)
    {
        ll y = i, z = n - i - 1;
        mp[y*(z+1) + z]+= 1;
        if(i<n-1)mp[(1+y)*z] += v[i+1] - v[i]  - 1;

    }
    while(q--)
    {
        ll k;
        cin>>k;
        if(mp.find(k) != mp.end())cout<<mp[k]<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
}

        


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }    
        
}