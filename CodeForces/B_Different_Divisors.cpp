#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
bool prime(ll n) {
if (n < (ll)2) return false;
for (ll x = 2; x*x <= n; x++) {
if (n%x == 0) return false;
}
return true;
}
void solve()
{
    int d;
    cin>>d;
    int ans = 1;
    int x = ans + d;
    while(!prime(x))x++;
    int y = x+d;
    while(!prime(y))y++;
    cout<<ans*x*y<<endl;

}
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}