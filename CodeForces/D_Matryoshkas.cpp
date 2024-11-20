#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i = 0;i<n; i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    vector<pair<int,int>> v;
    for(auto e:m)
    {
        v.push_back({e.first, e.second});
    }
    int ans = v[0].second;
    
    for(int i = 0;i<v.size() - 1; i++)
    {
        if(v[i+1].first - v[i].first == 1)
        {
            ans+= max(0,v[i+1].second-v[i].second);

        }
        else{
            ans+= v[i+1].second;
            
        }
    }
    cout<<ans<<endl;
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