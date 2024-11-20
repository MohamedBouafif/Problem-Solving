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
    vector<ll> w(n);
    vector<ll> pref(n);
    
    ll m = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        m = max(m,v[i]);
        w[i] = m;
        if(i==0)pref[i] = v[i];
        else pref[i] = pref[i-1]  + v[i];
    }
    while(q--)
    {
        int k;
        cin>>k;
        int  l = 0, r = n-1;
        while(r > l+1)
        {
            int m = (r+l)  / 2;
            if(w[m]<=k)l=m;
            else r = m;
        }
        if(v[l]>k)cout<<0<<" ";
        else{
            if(v[r]<=k)l = r;
            cout<<pref[l]<<" ";
        } 
        
        

    }
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