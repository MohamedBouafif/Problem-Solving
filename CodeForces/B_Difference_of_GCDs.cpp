#include "bits/stdc++.h"
using namespace std;
#define ll long long


void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        int x = (l + i + 1 - 1)/(i + 1) , y = r/(i+1);
        if(!((x*(i+1)>=l && x*(i+1)<=r)|| (y*(i+1)<=r&&y*(i+1)>=l)))
        {
            cout<<"NO\n";
            return;
        }
        else
        {
            if(x*(i+1)>=l) v[i] =x*(i+1);
            else v[i] = y*(i+1); 
        }
    }
    cout<<"YES\n";
    for(auto e:v)cout<<e<<" ";
    cout<<endl;
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