#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    if(a > c || b > d){
        cout<<"NO\n";
        return;
    }
    if(max(a,b)> 2*(1+ min(a,b))){
        cout<<"NO\n";
        return;
    }
    c-=a;
    d-=b;
    if(max(c,d)> 2*(1+ min(c,d))){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    
   
    
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