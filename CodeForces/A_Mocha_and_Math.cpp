#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int ans = 1e9;
    cin>>a[0];
    int x = a[0];
    for(int i = 1;i<n;i++)
    {
        cin>>a[i];
        x = x&a[i];
    }
    cout<<x<<endl;
    
}
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}