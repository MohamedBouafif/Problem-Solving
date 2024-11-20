    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
       int a1,a2,b1,b2;
       cin>>a1>>a2>>b1>>b2;
       int ans = 0;
       if(a1>b1 && a2>=b2 || a1>=b1 && a2>b2)ans++;
        if(a1>b2 && a2>=b1 || a1>=b2 && a2>b1)ans++;
        if(a2>b1 && a1>=b2 || a2>=b1 && a1>b2)ans++;
        if(a2>b2 && a1>=b1 || a2>=b2 && a1>b1) ans++;
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