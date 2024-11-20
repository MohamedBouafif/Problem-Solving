#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int nb_even = 0;
    ll ans = 1e9;
    
    
        for(int i = 0;i<n;i++)
        {
            if(a[i]%k==0)
            {
                cout<<0<<endl;
                return;
            }
            ans = min(ans,k-a[i]%k);
            if(a[i]%2==0)nb_even++;
        }
        if(k!=4)cout<<ans<<endl;
    

    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        
        solve();
        
        
    }
}