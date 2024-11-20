    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair
    ll k;
    bool good(ll n)
    {
        return n - (ll)sqrtl(n) >= k;   // traja3lk 9adeh min nombre yetktb au carre 9bal il n
    }

    // nb has even divisors ken sqrt(nb) * sqrt(nb) != nb    -> les entier ili 3andhom even divisors yit7atou f couples uniques
    void solve()
    {
        
        cin>>k;
        ll l = 1; // l is bad;      // 0 cant be a choice
        ll r = 2e18; //  r is good r - sqrt(r) >= 1e18
        while(r > l+1)
        {
            ll m = (l+r)/2;
            if(good(m)) r = m;        //use sqrtl f3odh sqrt
            else l = m;
        }
        cout<<r<<endl;
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