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
    int n,x;
    cin>>n>>x;

    vector<ll> v(n);
    cin>>v;
    sort(v.begin(),v.end());
    ll mex = 0;
    for(int x:v)
    {
        if(x==mex)mex++;
    }
    map<ll,int> mp;
    for(int x:v)
    {
        mp[x]++;
    }
   
    for(auto &e:mp)
    {
        if(e.second > 1)
        {
                
            mp[e.first + x] +=e.second - 1;
            if(e.first  + x==mex)mex++;
            e.second= 1;
                
        }
    }
    for(auto e:mp)
    {
        if(e.first == mex)mex++;
    }
    cout<<mex<<endl;
    
    
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