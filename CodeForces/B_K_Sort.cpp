#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n;i++)cin>>a[i];
    ll b[n];
    b[0] = a[0];
    for(int i = 1; i <n;i++)
    {
        if(a[i] < b[i - 1]) b[i] = b[i-1];
        else b[i] = a[i];
    } 
    ll cost = 0; 
    ll operations = 0;
    for(int i = 0 ; i < n;i ++)
    {
        cost+= b[i] - a[i];
        operations = max(operations, b[i] - a[i]);
    }
    cout<<cost + operations<<endl;

}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        
        solve();
        
    }
}