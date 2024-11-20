#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
    
void solve()
{
       
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n ;i++) cin>>a[i];
   

    ll ans = max((ll)0, a[n-1] - a[0]); 
    ll m1 = 0, m2 = 0;
    for(int  i =0; i < n -1; i++)
    {
        
        ans = max(ans, a[i] - a[i+1]);
        m1 = max(m1, a[n-1] - a[i]);
        m2 = max(m2, a[i] - a[0]);
        
    }
    ll x = a[0], y = a[n -1];
    sort(a, a+n);
    if(a[0] == x || a[n-1] == y) ans = a[n-1] - a[0];
    cout<<max(ans,max(m1,m2))<<endl;
    
       
}
int main()
{
        
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}