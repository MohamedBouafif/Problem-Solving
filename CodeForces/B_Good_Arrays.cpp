#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long  a[n];
    int nb = 0;
    for(int i = 0; i< n;i++) {cin>>a[i];if(a[i]==1)nb++;}
        if(n==1){cout<<"NO\n";return;}

    long long  acc  =  0; 
    
    for(int i = 0; i < n;i++)
    {
        acc+= a[i]-1;
    }
    if(acc-nb<0){cout<<"NO\n";return;}
    cout<<"YES\n";
    
  
    
}
int main()
{
    int t;cin>>t;
    while(t--){solve();}
}