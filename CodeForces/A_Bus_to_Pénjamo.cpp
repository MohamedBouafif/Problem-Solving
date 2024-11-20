#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    int r;
    cin>>r;
    vector<int> v(n);
    int h = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>= 2)
        {
            r-=v[i]/2;
            h+= v[i] - v[i]%2;
            v[i] %=2;
        }
    }
    int x = 0;
    for(int i = 0;i<n;i++)
    {
        x+= v[i];
    }
    
    if(x<=r) h+= x;
    else 
        h+= 2*r-x;
    cout<<h<<endl;
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