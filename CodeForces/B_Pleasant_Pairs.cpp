#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll n;
    cin>>n;
 
    vector<ll> a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    int ans = 0;
    

    /* 9adeh min pair(x,y) tq x*y <= 2*n ? 
        if  x = a
        then y tnajem tkoun : 2n/1, 2n/2, 2n/4, ..... 2n/n = 2n * (1 + 1/2 + 1/4 +...+ 1/n) = 2n * O(log(n))
        x est une constante => O(nlogn) (serie harmonique dominé par n log n)
        donc ken nparcouri les element lkol mayjich tle

    */
    for(ll i  = 0;i<n-1;i++)
    {
        ll mul = (i+1) / a[i] + 1;
        for(ll j = mul*a[i] - (i+1);j<=n;j+=a[i])
        {
            if(j>(i+1) && a[j-1] * a[i]==i+j+1)ans++;
        }
    }
    cout<<ans<<endl; 
    
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