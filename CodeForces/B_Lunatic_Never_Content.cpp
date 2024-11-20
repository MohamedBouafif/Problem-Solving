#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
int gcd(int a,int b)
{
    if(a==0) return b;
    return gcd(b%a, a);
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    int ans = abs(a[0] - a[n-1]);
    bool not_infinite = 1;
    for(int i = 0, j = n-1;i<j;i++,j--)
    {
        int x  = abs(a[i] - a[j]);
        if(x==0)continue;
        else {ans = gcd(ans,x);not_infinite = 1;}
    }
    if(not_infinite)cout<<ans<<endl;
    else cout<<0<<endl;
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