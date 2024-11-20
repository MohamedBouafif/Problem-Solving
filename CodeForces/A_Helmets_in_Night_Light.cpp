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
   ll n,p;
   cin>>n>>p;
   vector<ll> a(n),b(n);
   vector<pair<ll,ll>> v;
   for(int i = 0;i<n;i++)cin>>a[i];
   for(int i = 0;i<n;i++)cin>>b[i];
   for(int i = 0;i<n;i++)v.pb(mp(b[i],a[i]));
   ll cost = p;
   
   v.pb(mp(p,n-1));
   sort(v.begin(),v.end(),srt);
   ll reste = n-1;
   for(int i = 0;i<n;i++)
   {
        if(reste>0)
        {
            cost+=(ll)v[i].first*(ll)min(v[i].second,reste);
            reste-= min(v[i].second,reste);
        }
        else break;
   }
   
   cout<<cost<<endl;
   
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