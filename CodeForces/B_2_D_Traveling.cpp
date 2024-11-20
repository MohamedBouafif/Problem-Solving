    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        ll x[n],y[n];
        for(int i = 0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        ll cost1 = 1e10, cost2 = 1e10;
        if(a>k)
        {
            for(int i  = 0;i<k;i++)
            {
                cost1 = min(cost1,abs(x[i] - x[a-1]) + abs(y[i] - y[a-1]));
            }
        }
        else cost1 = 0;
        if(b>k)
        {
            for(int i = 0;i<k;i++)
            {
                cost2= min(cost2,abs(x[i] - x[b-1]) + abs(y[i] - y[b-1]));
            }
        }
        else cost2 = 0;
        cout<<min(cost1+cost2,abs(x[a-1] -x[b-1]) + abs(y[a-1] - y[b-1]))<<endl;
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