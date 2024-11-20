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
        ll r = 2e10 , l = 0;
        while(r > l + 1){
            ll mid = l + (r - l) / 2;
            ll consumption = 0;
            for(int i = 0;i<n;i++)
            {
                consumption+= max((ll)0,mid - a[i]);
            }
            if(consumption<=x) l = mid;
            else r = mid;
        }
        cout<<l<<endl;
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