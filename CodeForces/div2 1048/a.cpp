#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int a,b;
    cin >> a >>b;
    if(a>b)swap(a,b);
    if(a==b)cout<<0<<endl;
    else if(b%a == 0)cout<<1<<endl;
    else cout<<2<<endl;
    

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