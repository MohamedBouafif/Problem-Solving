    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair
int gcd(int a, int b) {
if (b == 0) return a;
return gcd(b, a%b);
}

        void solve()
        {
           ll n,x,y;
           cin>>n>>x>>y;
            ll z = ((ll)x * (ll)y)/gcd(x,y);
            ll a = n/x -n/z  ;
            ll b = n/y - n/z ;
            ll s = n*(n+1)/2 - (n-a+1)*(n-a)/2;
            s-= b*(b+1)/2;
            
            cout<<s<<endl;
            
            //cout<<a<<" "<<b;

            
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