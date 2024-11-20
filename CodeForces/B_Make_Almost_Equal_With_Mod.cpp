    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

        void solve()
        {
            int n;
            cin>>n;
            vector<ll> v(n);
            ll m = 0;
            for(int i = 0;i<n;i++){cin>>v[i];m = max(m,v[i]);}
            for(int i = 0;i<=60;i++)
            {
                bool on = 0, off = 0;
                for(int j = 0;j<n;j++)
                {
                    if(v[j]&(1LL<<i)) on = 1;
                    else off=1;
                }
                if(on&&off){cout<<(1LL<<(i+1))<<endl;return;}
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