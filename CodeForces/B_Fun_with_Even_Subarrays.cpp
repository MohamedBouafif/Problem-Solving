#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    int ans = 0, x = 0;
    for(int i = n-1;i>=0;i--)
    {
        while(i>=0 && a[i] == a[n-1]){
            x++;
            i--;
        }
        i-=x;
        if(x!=n)ans++;
        x*=2;
        i++;
        
    }
    cout<<ans<<endl;

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