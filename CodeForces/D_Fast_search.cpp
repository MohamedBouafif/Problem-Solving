#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n,k;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        cin>>k;

        sort(a.begin(),a.end());
        
        while(k--)
        {
            int x , y;
            cin>>x>>y;
            /*Approach : 
                1 : look for min i such that a[i] >=x
                2 : look for max i such that a[i] <=y
            */

            //1:
            int l = -1 , r = n;
            while(r-l>1)
            {
                int m = (l+r)/2;
                if(a[m]>=x) r = m;
                else l = m;
            }//-> r 
            int i = -1 , j = n;
            while(j-i > 1)
            {
                int m = (i + j)/2;
                if(a[m]<=y)
                    i = m;
                else j = m;
            }//->i
            cout<<max(0, i-r+1)<<" ";

            


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