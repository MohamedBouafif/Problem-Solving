#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n,k;
    cin>>n>>k;
    ll b[k];
    for(int i = 0; i < k; i++)cin>>b[i];
    sort(b, b + k);
    ll divto1 = 0 , cnt = 0;
    for(int i = 0 ; i < k - 1;i++)
    {
        divto1+= b[i] - 1;
        cnt += b[i];
    }
    ll ans = divto1 + cnt;
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        
        solve();
        
    }
}