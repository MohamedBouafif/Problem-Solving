    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        vector<ll> imp , p;
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%(ll)2==0)p.pb(v[i]);
            else imp.pb(v[i]);
        }
        ll ans = 0;
        if(p.size()==0||imp.size()==0)cout<<ans<<endl;
        else
        {
            sort(p.begin(),p.end());
            sort(imp.begin(),imp.end());
            int  i = 0;
           
            for(int i = 0;i<p.size();i++)
            {
                
                if(p[i] >imp[imp.size()-1] )
                {
                    ans++;
                    imp[imp.size()-1] += p[i];
                    
                    
                }
                if(p[i] < imp[imp.size()-1])
                {
                    ans++;
                    imp.pb(imp[imp.size()-1] + p[i]);
                }
            }
            /*cout<<"imp:\n";
            for(auto e:imp)cout<<e<<" ";
            cout<<endl;*/
            cout<<ans<<endl;
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