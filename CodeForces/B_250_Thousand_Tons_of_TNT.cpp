    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i = 0;i<n;i++)
            cin>>a[i];
        ll ans = 0;
        ll m = 1e9,M=0;
        for(int i = 0;i<n;i++)
        {
            m=min(m,a[i]);
            M=max(M,a[i]);
        }
        ans=max(ans,abs(M-m));
        
        vector<ll> div;
        for(int i = 2;i<n;i++)
            if(n%i==0)div.pb(i);
        vector<ll> pref(n);
        pref[0]=a[0];
        for(int i = 1;i<n;i++)pref[i]+=pref[i-1]+a[i];
        
        for(int i = 0;i<div.size();i++)
        {
            ll X = 0,x=1e18;
            
            for(int j =0;j<n;j+=div[i])
            {
                ll A = pref[j+div[i]-1];
                if(j-1>=0)A-=pref[j-1];
                
               
                x = min(A,x);
                X = max(X,A);
                
            }
            ans = max(ans,abs(X-x));
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