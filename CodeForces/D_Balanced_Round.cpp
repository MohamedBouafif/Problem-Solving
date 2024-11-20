#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];

    for(int i = 0; i < n;i++)
         cin>>a[i];
    
    sort(a,a+n);

    ll ans = 0, cnt = 0;
    
    for(ll i = 0; i < n -1 ;i++)
    {
        if(abs (a[i] - a[i+1]) <= k) cnt++;
        else 
        {
            if(cnt!=0) ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans,cnt);
    cout<<n - (ans +1) <<endl;
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