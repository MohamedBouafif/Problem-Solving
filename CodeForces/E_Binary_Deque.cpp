#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (T x : v) os << x << " ";
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &x : v) is >> x;
    return is;
}

void solve()
{
    int n,s;
    cin>>n>>s;
    vector<int> v(n);
    vector<int> pref(n+1,0);
    cin>>v;
    for(int i = 1;i<=n;i++)
        pref[i]+=pref[i-1] + v[i-1];
    int ans = 1e9;
    for(int l = 0;l<=n;l++)
    {
        bool ok=0;
        int r = n;
        while(l<r)
        {
            int  m = (r+l)/2;
            if(pref[m] - pref[l] == s)
            {
                r=m;ok=1;
            }
            else break;
        }
        if(pref[n] - pref[n-r]==0) r =0;
    
        if(ok) ans = min(ans,l + r);
        
    }
    cout<<ans<<endl;
    
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