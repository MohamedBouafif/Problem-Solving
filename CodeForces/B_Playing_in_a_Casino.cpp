#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
   ll n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0;i<n;i++)
        for(int j = 0;j<m;j++)
             cin>>a[i][j];

    ll s = 0;
    for(int j = 0;j<m;j++)
    {
        vector<ll> v(n);
        for(int i = 0;i<n;i++)
        {
            v[i] = a[i][j];
        }
        sort(v.begin(),v.end());
        vector<ll> intersection(n-1);
        for(int i = 0;i<n-1;i++)
        {
            intersection[i] = (n-i-1)*(i+1);
        }
        for(int i = 0;i<n-1;i++)
        {
            s+= (v[i+1] - v[i])*intersection[i];
        }
    }
    cout<<s<<endl;
   

}
    

    


int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}