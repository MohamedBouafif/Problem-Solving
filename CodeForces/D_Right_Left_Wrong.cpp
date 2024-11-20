#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> p(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    string s ;
    cin>>s;
    p[0] = v[0];
    for(int i = 1;i<n;i++)p[i] = p[i-1] + v[i];
    int i = 0, j = n-1;
    vector<pair<int,int>> r;
    while(i<j)
    {
        
        while(s[i]!='L' && i<n) i++;
        while(s[j]!='R' && j>=0) j--;
        if(i<j&& i<n && j>=0)r.push_back({i,j});
        i++;
        j--;
    }
   
    ll ans = 0;
    for(int i = 0;i<r.size();i++)
    {
        if(r[i].first == 0)
        {
            ans+= p[r[i].second];
        }
        else
        {
            ans+= p[r[i].second] - p[r[i].first - 1];
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}