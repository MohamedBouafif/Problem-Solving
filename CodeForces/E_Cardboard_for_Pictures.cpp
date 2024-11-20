    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        //resolution de pol de 2nd degre
        ll    n,c;
        cin>>n>>c;
        vector<ll>s(n);
        ll  sum = 0,sum_square = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>s[i];
            sum+=s[i];
            c-=s[i]*s[i];
        }
        ll u = sum/n;
        sum/=n;
        ll ans = (sqrt(u*u + c/n) - sum)/2;
        //if i didnt simplify the answer it would overflow in the sqrt function (even if i use sqrtl instead of sqrt !)
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