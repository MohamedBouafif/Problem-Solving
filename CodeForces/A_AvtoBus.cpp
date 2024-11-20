#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n;
    cin>>n;
    ll M , m;
    if(n%2 !=0 || n <4)cout<<-1<<endl;
    else if(n==4) cout<<1<<" "<<1<<endl;
    else
    {
        if(n%6 !=0) m = n/6 +1;
        else m = n/6;
        M = n/4;
        cout<<m<<" "<<M<<endl;
    }
    return;
    
   
    



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