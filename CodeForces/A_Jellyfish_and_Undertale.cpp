#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll timer = b -1 ;
    for(int i = 0; i < n;i++)
    {
        ll x;
        cin>>x;
        timer+= min(x,a - 1);

    }
    cout<<timer + 1<<endl;
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