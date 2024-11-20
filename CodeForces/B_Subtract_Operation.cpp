#include "bits/stdc++.h"
using namespace std;
#define ll long long


void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    bool ok = 0;
    int l = 0, r = 1;
    if(n==1) ok= (a[0]==k);
    else
    {
        while(l<n && r<n)
        {
            if(a[l] + k == a[r])
            {
                ok= 1;
                break;
            }
            else
            {
                if(a[l] + k<a[r]) l++;
                else r++;
            }
        }
    }
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";

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