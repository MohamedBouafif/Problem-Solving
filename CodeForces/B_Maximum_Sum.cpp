    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n,k;
        cin>>n>>k;
        ll a[n];
      
        for(int i = 0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        ll cum[n];
        cum[0] = a[0];
        for(int i = 1;i<n;i++)cum[i] = cum[i - 1] + a[i];
        ll ans = cum[n - k - 1]; //hedhi ken na7i il k max elements
        int j = -1;
        for(int i = 1;i<= k;i++)   //! i start from 2nd pos
        {
            j+=2;
            ans = max(ans, cum[n-k-1    + i] - cum[j]);
                           // nzid we7ed max x na9s 2 min
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