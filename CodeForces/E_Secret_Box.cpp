#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        ll x,y,z;
        cin>>x>>y>>z;
        ll k;
        cin>>k;
        ll ans = 0;
        for(int i = 1;i<=x;i++)
        {
            ll sx = i;
            for(int j = 1;j<=y;j++)
            {
                ll sy = j;
                ll sz = k/(sx*sy);
                if(sz*sx*sy == k)
                {
                    ans = max(ans, (x-sx +1)*(y-sy + 1)*(z-sz + 1));
                }
            }
        }
        cout<<ans<<endl;

        
    }

        


    int main()
    {
        
        int tc=1;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }