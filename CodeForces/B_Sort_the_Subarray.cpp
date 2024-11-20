#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    //finding the largest sorted subarray in b    (a')  that it's element are different from a
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    for(int i = 0;i<n;i++)cin>>b[i];
    
    vector<pair<int,int>> v;
    int m = 0;
    
    for(int l = 0;l<n;l++)
    {
        int r = l;
        bool ok = 0; 
        if(a[r]!=b[r]) ok = 1;
        while(r+1< n && b[r]<= b[r+1])
        {
            r++;
            if(a[r]!=b[r]) ok = 1;
        }
        if(ok)  // to make sure that i take the sub arrays that he sorted
        {
            m = max(m,r-l);
            v.pb(mp(l,r));
        }
        l = r;
                
    }
    int l,r;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i].second - v[i].first ==m){l  = v[i].first; r = v[i].second; break;}
    }
    cout<<l + 1<<" "<<r + 1<<"\n";
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