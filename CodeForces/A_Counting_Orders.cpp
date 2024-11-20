    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        //arbre de probabilite 
        int n;
        cin>>n;
        vector<pair<int,int>> a(n),b(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i].first;
            
        }
        for(int i = 0;i<n;i++)
        {
            cin>>b[i].first;
            
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans = 1;
        int j = 0;
        bool no = 0;

        for(int i = 0;i<n;i++)
        {
            j = a.size() - (upper_bound(a.begin(),a.end(),b[n-1-i]) - a.begin());  // O(N.log(N))
            /*
            while(a[n - 1 - j].first > b[n - 1 - i].first && j<n)
            {
                j++;    // this is bad cause in a certain test case it can be O(N*N) 
                
            }*/
            if(j - i <= 0){no = 1;break;}
            b[n - 1 - i].second = j - i;
        }
        if(no){cout<<0<<endl;return;}
        ll m  = 1e9 + 7;
        for(int i = 0;i<n;i++)
        {
            ans = ((ans%m)*(b[i].second%m))%m;
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