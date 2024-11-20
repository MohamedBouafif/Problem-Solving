#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll a, b;
    cin>>a>>b;
    int ans = 30;
    
    for(int i = b;i<= b+ 31;i++)
    {
        if(i==1)continue;
        ll x = a;
        int cnt = i-b;
        while(x!=0)
        {
            x/=i;
            cnt++;
        }
        ans = min(cnt,ans);
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