    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        ll a[n];
        ll x = 2;
        for(int i = 0;i<n;i++)cin>>a[i];
        ll ans  = a[0];
        ll s = a[0];
        for(int  i = 1;i<n;i++)
        { 
            if(abs(a[i])%2 == abs(a[i-1])%2)s = a[i];
            else{
                
                 s+= a[i];
                
            }
            if(s<a[i]) s = a[i];

            ans = max(ans, s);
            
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