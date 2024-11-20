#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    ll n;
    ll d;
    cin>>n>>d;
    vector<ll> a(n);
    for(int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    int  p = n;
    int ans=  0;
    for(int i = 0; i < n;i++)
    {
        int addplayer = d/a[i];
        
        
        p-=addplayer;
        if(i<p)ans++;
        else break;
    }
    cout<<ans<<endl;
}
int main()
{
    int tc = 1;
    while(tc--)
    {
        
        solve();
        
    }
}