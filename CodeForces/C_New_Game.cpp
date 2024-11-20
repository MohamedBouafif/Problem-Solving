#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    map<int,int> mp;
    for(ll x:a) mp[x]++;
    vector<pair<ll,ll>> v2;
    int split = 1;
    for(auto e:mp)
    {
        
        v2.push_back({e.first, e.second});
        
        
    }
    for(int i = 1;i<n;i++)
    {
        if(a[i] - a[i-1] >1)split++;
    }
   
    ll mx = 0;
    int j  = 0;
    for (int c = 0; c < split; c++) {
        vector<ll> pref;
        ll curmx = 0;
        int i = j;
        
        pref.push_back(v2[i].second);
        
        
        for (i = j + 1; i < v2.size(); i++) {
           
            if (v2[i].first - v2[i - 1].first > 1) {
                break;
            }
            
            pref.push_back(pref[i-1-j] + v2[i].second);
        }

        
      
       
        j = i;
        if (pref.size() < k) {
            curmx = pref[pref.size() - 1];  
        } else {
            curmx = pref[k-1];  
            ll l = 0;
            
            
            for (int i = k ; i < pref.size(); i++) {
                curmx = max(curmx, pref[i] - pref[l]);
                l++;
            }
        }

        
        mx = max(mx, curmx);
        
    }
    cout<<mx<<endl;
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