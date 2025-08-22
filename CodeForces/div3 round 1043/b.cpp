#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{  
    ll n;
    cin >> n;
    int length = 0;
    ll m = n;
    while(m/10){
        length++;
        m/=10;
    }
    vector<ll> v;
    for(int i = length; i>= 1 ;i--){
        ll y = 1;
        for(int j = 1;j<=i;j++){
            y*=10;
        }
        y++;
        if(n%y == 0)
            v.push_back(n/y);

    }
    if(v.size() == 0)cout<<0<<endl;
    else{
        cout<<v.size()<<endl;
        for(auto e:v)cout<<e<<" ";
        cout<<endl;
    }
    
    
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}