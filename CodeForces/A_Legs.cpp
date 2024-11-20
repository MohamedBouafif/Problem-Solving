#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define pb push_back
#define mp make_pair
bool srt(pair<ll,ll> p1 , pair<ll,ll> p2)
{
    if(p1.first==p2.first)return p1.second > p2.second;
    return p1.first<p2.first;
}
void solve()
{
   int n;
   cin>>n;
   if(n<=4){cout<<1<<endl;}
   else if(n>4 && (n%4)%2==0)cout<<n/4 + (n%4)/2<<endl;
   else cout<<n/2<<endl;
   
   
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