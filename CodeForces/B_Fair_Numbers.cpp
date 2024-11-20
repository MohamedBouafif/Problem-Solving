#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b) 
{
    return ((a*b)/gcd(a,b));
}
bool test(ll n)
{
    ll m = n;
    ll LCM = 1;
    while(n)
    {
        if(n%10 !=0)  LCM = lcm(n%10,LCM);
        n/=10;
    }
    
    if(m%LCM==0)return true;
    return false;
}
void solve()
{
    ll n;
    cin>>n;
    while(!test(n))
    {
        n++;
    }
    cout<<n<<endl;
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