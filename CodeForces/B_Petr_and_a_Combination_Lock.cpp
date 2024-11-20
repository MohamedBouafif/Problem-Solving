#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    for(int mask = 0; mask < (1<<n);mask++)
    {
        int degre_set = 0;
        for(int i = 0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                degre_set+=a[i];
                degre_set%=360;
            }
            else
            {
                degre_set-=a[i];
                if(degre_set<0) degre_set+=360;
            }
        }
        if(degre_set==0)
        {
            cout<<"YES\n";
            return;
        }
        
    }
    cout<<"NO\n";
}
int main()
{
    int tc=1;
    
    while(tc--)
    {
        solve();
    }
}