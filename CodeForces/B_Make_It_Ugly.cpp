#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    vector<int>  v(n);
    map<int,int> mp;
    vector<pair<int,int>> occ;
    for(int i = 0;i<n;i++){
        cin>>v[i]; 
        mp[v[i]]++;
    }
    int i = 0;
    for(auto e:mp)
    {
        occ.push_back({e.second,e.first});
    }
    sort(occ.begin(),occ.end());
    int x = occ[occ.size()-1].first;
    
    if(x==n)
    {
        cout<<-1<<endl;
        return;
    }
    int ans = x;
    for(int i = 0;i<n;i++)
    {
        int cnt = 1;
        int j = i;
        while(j<n-1&&v[j]==v[j+1])
        {
            cnt++;
            j++;
        }
       
        if(mp[v[i]]==x)
        {
            ans = min(ans,cnt);
        }
        i=j;

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