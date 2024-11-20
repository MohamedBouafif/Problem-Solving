#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    vector<pair<ll,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second = i;
    }

    int ans[n];
    sort(v.begin(),v.end());
    ll s[n];
    s[0] = v[0].first;
    for(int i = 1;i<n;i++)
    {
        s[i] = s[i-1] + v[i].first;
    }
    int prev  = n-1;
    ans[v[n-1].second] = n - 1;
    for(int i = n-2;i>=0;i--)
    {
        if(s[i] >= v[i+1].first) ans[v[i].second] = prev;
        else
        {
            ans[v[i].second] = i;
            prev = i;
        }
        
    }
    for(auto e:ans)cout<<e<<" ";
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