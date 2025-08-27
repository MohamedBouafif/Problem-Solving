#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    ll odd = 0, even = 0, maxx = 0;
    ll s= 0;
    vector<ll> v(n);
    for(ll& x:v){
        cin >> x;
        maxx = max(x, maxx);
        if(x%2)odd++;
        else even ++;
        s+= x;
    }
   
    if(even == 0 || odd == 0)cout<<maxx<<endl;
    else
    {
        odd--;
        even = 1;
        cout<< s - (odd - 1) - even<<endl;
    }
    
   
    
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
}