#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll op = 0;
    ll nb1 = (k*y + 1 - x) / (x-1);
    while(x + nb1*(x-1)<k*y + 1) nb1++;
    
    op+= nb1+1;
    ll amount = x + nb1*(x-1);
    op+= k;
    amount -= k*y;
    ll nb2 = (k - amount - 1 -x)/(x-1);
    while(amount - 1 + x + nb2*(x-1)<k) nb2++;
    op+=nb2+1;
    

    cout<<op<<endl;
    
    
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