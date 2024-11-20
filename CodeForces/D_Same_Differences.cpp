#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        v[i] = v[i] - (i+1);
    }
    //for(auto e:v)cout<<e<<endl;
    map<int,ll> mp;
    for(int x:v)mp[x]++;
    ll ans = 0;
    for(auto e:mp)
    {
        ans+= ((e.second-1 )* e.second) / 2;
    }
    cout<<ans<<endl;
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