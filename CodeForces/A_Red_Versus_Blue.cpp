#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n,r,b;
    cin>>n>>r>>b;
    int  x = r/(b+1);
    int  reste = r%(b+1);
    for(int  i = 1;i<=reste;i++)cout<<string(x+1,'R')<<'B';
    for(int j = 1;j<=b-reste;j++)cout<<string(x,'R')<<'B';    
    cout<<string(x,'R');
    cout<<endl;
   
    
    
    
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