#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        int mx1 = 0, mx2 = 0;
        if(n%2 != 0)
        {
            for(int i = n-1; i>=0;i-=2)
            {
                
                mx2 = max(mx2,a[i]);
            }
            for(int j = n-2; j>=1;j-=2)mx1 = max(mx1,a[j]);
            cout<<max(mx1 + n/2,mx2 + n/2 + 1)<<endl;
        }
        else
        {
            for(int i = n-2; i>=0;i-=2)
            {
                mx1 = max(mx1, a[i]);
            }
            for(int j = n -1;j>=1;j-=2)mx2 = max(mx2,a[j]); 
            cout<<max(mx1,mx2) + n/2<<endl;
        }

        
    }

        


    int main()
    {
        
        int tc=1;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }