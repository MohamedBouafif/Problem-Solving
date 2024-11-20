#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int64_t ceil_div(int64_t a, int64_t b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}
 
void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll pos_x = 0, pos_y = 0;
    
    pos_x= ceil_div(x,k);
    pos_y= ceil_div(y,k);
    ll ex = 0;
    if(pos_x>pos_y) ex=pos_x-1-pos_y;
    else ex= pos_y - pos_x;
    cout<<pos_x+pos_y+ex<<endl;



}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}