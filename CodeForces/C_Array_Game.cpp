#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{

    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    
    if(k>=3)
    {
        cout<<0<<endl;
    }
    else
    {
        
        sort(v.begin(),v.end());
        ll ans = v[0];
        for(int i = 0;i<n-1;i++)ans = min(ans,v[i+1] - v[i]);
        if(k==1)
        {
            cout<<ans<<endl;
        }
        else 
        {
            
            for(int i = 0;i<n-1;i++)
            {
                for(int j = i+1;j<n;j++)
                {
                    ll distance = v[j] - v[i];
                    int position = (  lower_bound(v.begin(),v.end(), distance) -  v.begin()   );

                    if(position < n)ans = min(ans, v[position] - distance);  
                    if(position > 0)ans = min(ans, distance - v[position-1]);

                    /*keni bin 1 w n-1 yemchi ychouf ili 9balha bka3ba wili ba3dha b ka3ba*/

                }
            }
            cout<<ans<<endl;
        }
    }
    
       
    
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