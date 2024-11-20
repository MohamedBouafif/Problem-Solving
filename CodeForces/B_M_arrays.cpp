#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,m,ans = 0;
    cin>>n>>m;
    vector<int> v(n);
    map<int,int> mp;

    for(int i = 0 ;i <n;i++)
    {
        cin>>v[i];
        mp[v[i]%m]++;
    }
    for(auto &e:mp)
    {

        if(e.first == 0)ans++;
        else if(e.first * 2 == m)
        {
            ans++;   // eg : m = 4  &&  2 2 2
        }
        else if(e.first * 2 < m || mp.find(m - e.first) == mp.end()) 
// bch ychouf ken chtar louleni ta3 lmap
        {
            int x  = mp[m-e.first];
            
            ans+= 1 + max(0, abs(e.second - x) - 1);

        }
        
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