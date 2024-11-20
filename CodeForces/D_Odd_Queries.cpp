    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long ;
    
    void solve()
    {
        int n;
        ll q;
        cin>>n>>q;
        ll a[n];
        for(int i = 0; i < n;i++) cin>>a[i];
        ll cum_sum[n];
        cum_sum[0] = a[0];
        for(int i =  1 ; i < n;i++) cum_sum[i] = a[i] + cum_sum[i-1];
        while(q--)
        {
            int l,r;
            ll k;
            cin>>l>>r>>k;
            ll sumLR ;
            if(l>1) sumLR = cum_sum[r-1] - cum_sum[l-2];
            else sumLR= cum_sum[r-1];
            ll newsum = cum_sum[n-1] - sumLR + (r-l + 1) * k;
            
            if(newsum%2!=0) cout<<"YES\n";
            else cout<<"NO\n";
        }
       
    }
    int main()
    {
        
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }