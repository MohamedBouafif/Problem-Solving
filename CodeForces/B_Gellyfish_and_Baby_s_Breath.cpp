#include<bits/stdc++.h>
using namespace std;
using ll = long long  ;
void solve()
{    
    int n;
    cin>>n;
    ll p[n], q[n];
    for(int i = 0 ; i < n;i++)cin>>p[i];
    for(int i = 0 ; i < n;i++)cin>>q[i];
    for(auto &x:p) x = pow(2,x);
    for(auto &x:q) x = pow(2,x);
    cout<<p[0] + q[0]<<" ";
    ll x  = max(p[0],q[0]);
    int index = 0;
    for(int i = 1;i<n;i++){
        if(p[i] > x){cout<<p[i]+q[0]<<" "; x = p[i];}
        else if(q[i] > x){cout<<q[i]+p[0]<<" "; x = p[i];}
        else cout << max(p[index] + q[i - index], p[i -index] + q[index])<<" ";
        ll t = max(x,max(p[index] + q[i - index], p[i -index] + q[index]));
        if(t >=x ){
            if(p[index] > p[i - index])x = p[index];
            else x = q[index];
            index = i;
        }
        
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){solve();}
}