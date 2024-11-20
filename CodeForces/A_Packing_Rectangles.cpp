        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long;
        #define pb push_back
        #define mp make_pair
        
        void solve()
        {
            ll w,h,n;
            cin>>w>>h>>n;
            ll l =0, r = n*max(w,h); // if n = 1e9 && w == 1e9 && 
            r = 1;
            while((r/w)*(r/h)<n)r*=2;
            while(r> l +1)
            {
                ll m = (r+l)/2;
                if((m/w) * (m/ h)>= n) r = m;
                else l = m;
            }
            cout<<r<<endl;
        }
            

            


        int main()
        {
            int tc = 1;
            while(tc--)
            {
                
                solve();
                
            }
        }