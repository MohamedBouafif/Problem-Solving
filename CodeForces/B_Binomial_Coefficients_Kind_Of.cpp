#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
ll MOD = 1e9 + 7;
void solve()
{
    ll N = 1e5;
    vector<ll> puis2(N,2);
    ll ans = 1;
    for(int i = 1;i<N;i++) puis2[i] = ((puis2[i-1]%MOD)*2%MOD)%MOD;
    int n;
    cin>>n;
    vector<int> v(n),k(n);
    for(int  i = 0;i<n;i++)cin>>v[i];
    for(int i = 0;i<n;i++)cin>>k[i];
    for(int i = 0;i<n;i++)
    {
        if(k[i] == 0)cout<<v[i]<<endl;
        else cout<<puis2[k[i] - 1]<<endl;
    }
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