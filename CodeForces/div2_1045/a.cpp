#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n , a, b;
    cin >> n >> a >> b;
    if(n == b){
        cout<<"YES\n";
    }
    else if(max(0LL , n - b)%2 == 0){
        if(a == n || a<=b || a%2 == b%2){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    else cout<<"NO\n";
    
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        
        solve();
        
        
    }
}