#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    ll a0 = v[0] - x, b0 = v[0] + x;
    ll change = 0;
    for(int i = 1;i<n;i++)
    {
        ll A = v[i] - x, B = v[i] + x;
        if(b0>=A && B>= a0)
        {
            a0 = max(a0,A);
            b0 = min(b0,B);
        }
        else
        {
            change++;
            a0 = A;
            b0 = B;
        }

    }
    cout<<change<<endl;
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