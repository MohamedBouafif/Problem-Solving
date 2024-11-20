#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll a,b;
    cin>>a>>b;
    double X = 1;
    if(b<=a)
    {
        X = a/(double)b;
    }
    else
    {
        X = b/(double)a;
    }
    if((ll)X!=X)cout<<"-1\n";
    else
    {
        ll r = 0;
        
        while((ll)X%2==0){r++;X/=2;}
        if(X!=1)cout<<"-1\n";
        else
        {
            ll ans = 0;
            if(r>=3){ans+= r/3;r%=3;}
            if(r>=2){ans+= r/2;r%=2;}
            if(r>=1){ans++;}
            
            cout<<ans<<endl;
        }

    }

    
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