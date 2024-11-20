#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        ll a,b;
        cin>>a>>b;
        if(a>=b)cout<<a<<endl;
        else cout<<max(0LL,a - (b-a))<<endl;
        

        
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