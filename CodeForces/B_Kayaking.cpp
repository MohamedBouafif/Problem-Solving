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
    
    int n;
    cin>>n;
    vector<int> v(2*n);
    cin>>v;
    sort(v.begin(),v.end());
    ll ans = 1e9;
    
    for(int i = 0;i<2*n-1;i++)
    {
        for(int j = i+1;j<2*n;j++)
        {
            ll diff = 0;
            vector<int> p;
            for(int k = 0;k<2*n;k++)
            {
                if(k==i||k==j)continue;
                else p.push_back(v[k]);
            }
            
            for(int k = 0;k<p.size();k+=2)diff+=abs(p[k]-p[k+1]);
            ans = min(ans,diff);
        }
    }
    cout<<ans<<endl;
    
}

    


int main()
{
    int tc ;
    tc = 1;
    while(tc--)
    {
        
        solve();
        
    }
}