#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    for(int i= 0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;


    
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