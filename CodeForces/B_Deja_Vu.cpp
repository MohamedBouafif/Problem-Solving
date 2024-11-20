    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        ll n,q;
        cin>>n>>q;
        ll a[n],x[q];
        vector<pair<ll,ll>> POWER;
        for(int i = 0;i<n;i++)cin>>a[i];
        for(int i = 0;i<q;i++)cin>>x[i];
        for(int i = 0;i<n;i++)
        {
            ll temp = a[i], p = 0;
            while(temp%2==0)
            {
                p++;
                temp/=2;
            }
            POWER.pb(mp(p,i));
        }
        sort(POWER.begin(),POWER.end());
        
        for(int i = 0;i<q;i++)
        {
            auto it  = lower_bound(POWER.begin(),POWER.end(),mp(x[i],(ll)0));
            int pos  = it-POWER.begin();
            if(pos<n)
            {
                for(int j = pos;j<n;j++)
                {
                    POWER[j].first = x[i] - 1;
                    a[POWER[j].second] += pow(2,x[i] - 1);
                }
                sort(POWER.begin(),POWER.end());
            }

        }
        for(auto e:a)cout<<e<<" ";
        cout<<endl;       
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