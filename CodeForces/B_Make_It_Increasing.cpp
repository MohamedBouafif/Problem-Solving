#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n;i++)cin>>a[i];
    ll op  = 0;
    for(int j = n-1 ;j>=1;j--)
    {
        if(a[j]==0){cout<<-1<<endl;return;}
        if(a[j]<=a[j-1]&& a[j]!=0)
        {
            float  k = log(a[j-1]/a[j])/log(2);
            k = (ll)k +1;
            
            a[j-1] = a[j-1]/pow(2,k);
            
            op+=k;
        }
        
    }
    
    cout<<op<<endl;


}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}