    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll> pref(n+1,0);
        for(int i = 1;i<=n;i++)pref[i] = pref[i-1] + a[i-1];
        ll ans = 0;
        ll prevy = 0;
        for(ll i = n;i>=1 ;i--)
        {
            ll sum = pref[n]  + prevy*n;
            ll sum_deleted = pref[n] - pref[i] + prevy*(n-i);
            if(sum_deleted - sum + x < 0)continue;
            ll y  = (x-sum + sum_deleted) / i;
            
            ans += (y+1) * i;
            prevy+= y+1;
        }
        cout<<ans<<endl;

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