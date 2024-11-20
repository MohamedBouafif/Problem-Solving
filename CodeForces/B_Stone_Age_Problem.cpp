    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n,q;
        cin>>n>>q;
        vector<ll> a(n) , FQ(n, 0), VFQ(n);
        ll SQ = 0, VSQ = 0, s = 0;
        for(int i = 0; i < n; i ++)
        {
            cin>>a[i];
            VFQ[i] = a[i]; 
            s+=a[i];
        }
        for(int j = 1;j<=q;j++)
        {
            int t;
            cin>>t;
            if(t==1)
            {
                ll i,x;
                cin>>i>>x;
                if(FQ[i-1] >= SQ)
                {
                    a[i-1] = VFQ[i-1];
                }
                else
                {
                    a[i-1] = VSQ;
                    
                }
                s+= x - a[i-1];
                VFQ[i-1] = x;
                FQ[i-1] = j;
            }
            else{
                ll x;
                cin>>x;
                s = n*x;
                VSQ  = x;
                SQ = j;
            }
            cout<<s<<endl;

        }
    }
        

        


    int main()
    {
        
            
            solve();
            
        
    }