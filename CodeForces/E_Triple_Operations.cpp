        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair
        ll  factorial(ll n) 
        { 
            return (n==1 || n==0) ? 1: n * factorial(n - 1);  
        }
        void solve()
        {
            ll l,r;
            cin>>l>>r;
            ll ans  = log(l)/log(3)   + 1;
            ll x  = factorial(r);
            ll y = factorial(l-1);
            ans += r-l + 1 + (logl(x) - logl(y))/log(3);
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