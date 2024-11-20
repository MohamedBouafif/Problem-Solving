#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    ll d1 = a[0], d2 = a[1];
    for(int i = 0;i<n;i+=2){
        if(i<n)d1 = gcd(d1,a[i]);
        if(i+1<n)d2=gcd(d2,a[i+1]);
    }
    bool good1 = 1,good2 = 1;
    for(int i = 0;i<n;i+=2)
    {
        if(i+1<n && a[i+1]%d1 == 0&& good1)good1 = 0;
        if(i<n && a[i]%d2 == 0 && good2) good2 = 0;
    }
    if(good1){cout<<d1<<endl;return;}
    if(good2)cout<<d2<<endl;
    if(!good1 && !good2)cout<<0<<endl;

    
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