#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        while(k--)
        {
            int x;
            cin>>x;
            int  l = -1 , r = n;
            while(r - l > 1)
            {
                int   m  = (l+r)/2;
                if(a[m]<x)l = m;
                else r = m;
            }
            cout<<r+1<<endl;
        }

        
    }

        


    int main()
    {
        
        int tc=1;
        //cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }