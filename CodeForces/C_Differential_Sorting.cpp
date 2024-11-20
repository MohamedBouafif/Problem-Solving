    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        if(a[n-2] > a[n-1] )
        {
            cout<<-1<<endl;
        }
        else 
        {
            if((a[n-2] <= a[n-1] && a[n-1] < 0))
            {
                if(!is_sorted(a.begin(),a.end()))cout<<-1<<endl;
                else cout<<0<<endl;
            }
            else{
                cout <<n-2<<endl;
                for(int i = 0; i < n-2;i++)
                {
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
            }
        }
    }

        


    int main()
    {
        
        int tc;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }