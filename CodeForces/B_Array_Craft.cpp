#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(y%2==0)
            for(int i = 1;i<=y-1;i++)
                if(i%2 !=0)cout<<-1<<" ";
                else cout<<1<<" ";
        else
            for(int i = 1;i<=y-1;i++)
                if(i%2 !=0)cout<<1<<" ";
                else cout<<-1<<" ";
        
        
        for(int i = y;i<=x;i++)cout<<1<<" ";

        for(int i = 1; i <=n-x;i++)if(i%2 !=0)cout<<-1<<" ";else cout<<1<<" ";
        cout<<endl;
        
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