#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
   int n,k;
   cin>>n>>k;
   int ans = 0;
   if(k>=n){k-=n;ans++;}
   
   for(int i = n-1;i>=1;i--)
   {
        
        if(k>= i){ans++;k-=i;}
        if(k>= i){ans++;k-=i;}
   }
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