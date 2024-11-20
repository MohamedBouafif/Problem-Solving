#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   ll ans = 0;
   set<char> ss;
   for(int i =0;i<n;i++)
   {
        int curr_size = ss.size();
        ss.insert(s[i]);
        if(ss.size()>curr_size)ans+=n-i;

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