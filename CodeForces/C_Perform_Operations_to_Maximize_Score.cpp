        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair

            /*this solution doesnt work */
            
        void solve()
        {
            ll n,k;
            cin>>n>>k;
            ll a[n],b[n];
            map<ll,ll> mul;
            for(int i = 0;i<n;i++)
            {
                cin>>a[i];
                mul[i+1] = a[i];
            }
            ll x = mul[n/2] , y = mul[n/2 +1];
            ll s = 0;
            for(int i = 0;i<n;i++)
            {
                if(a[i]<y)s+=y-a[i];
            }
            for(int j = 0;j<n;j++)
            cin>>b[j];
            ll ans = 0;
            for(int i = 0;i<n;i++)
            {
                ll h = a[i];
                if(b[i]==1){
                    h+= k;
                    if(a[i]<=x)h+=y;
                    else h+=x;
                }
                else
                {
                    if(k>=s)
                    {
                        h+=y;
                        
                        h+= (k-s)/(n/2);
                    }
                    
                }
                
                ans = max(ans,h);
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