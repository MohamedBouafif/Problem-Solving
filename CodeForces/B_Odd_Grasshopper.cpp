#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll x,n;
    cin>>x>>n;
    if(n%4==0){cout<<x<<endl;return;}
    ll const q = 4;
    ll y= (n-1)%4;
    ll ans = 0;
    if(abs(x)%2==0){
        
        if(y==1) cout<<n+x-1-q*(n/q);
        else if (y==2) cout<< 2*n +x-1-q*(n/q);
        else if (y==3) cout<< n - 3+x-1-q*(n/q);
    }
    else
    {
         if(y==1) cout<<-n+x+1+q*(n/q);
        else if (y==2) cout<< -2*n +x+1+q*(n/q);
        else if (y==3) cout<< -n + 3 +x +1+q*(n/q);
    }
    
}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}