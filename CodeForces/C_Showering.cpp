    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
       int n,s,m;
       cin>>n>>s>>m;
       int ans = 0;
       int rr = 0;
       
       for(int i = 0;i<n;i++)
       {
            int l,r;
            cin>>l>>r;
            ans = max(ans,l-rr);
            rr = r;
       }
       ans = max(ans, m - rr);
       if(ans>=s)cout<<"YES\n";
       else cout<<"NO\n";

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