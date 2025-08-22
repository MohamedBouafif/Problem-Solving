#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{  
    int n;
    cin >> n;
   
    stack<ll> s;
    while(n){
        s.push(n%3);
        n /=3;
    }
    
    ll ans = 0;
    while(!s.empty()){
        int x = s.size() - 1;
        ll pp = 1;
        for(int i = 1 ; i <= x+1;i++){
            pp*=3;
        }
        // cout<<s.top()<<endl;
        ans +=s.top()*( pp + x*(pp/9LL));
        s.pop();

    }
    cout<<ans<<endl;
    
    
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