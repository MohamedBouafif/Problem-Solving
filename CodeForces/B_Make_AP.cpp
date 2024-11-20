#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool ordre(int a,int b,int c){
    return ((a<=b&&b<=c) || (a>=b&&b>=c));}
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    
    
        ll aa = 2*b - c;
        if(aa>=a && aa%a==0 && aa!=0 && ordre(aa,b,c)){cout<<"YES\n";return;}
        
        ll bb = (c+a)/2;
        if((c+a)%2==0 && bb%b ==0 && bb>=b &&bb!=0&& ordre(a,bb,c)){cout<<"YES\n";return;}

        ll cc = 2*b - a;
        if(cc>=c && cc%c==0 && cc!=0 && ordre(a,b,cc)){cout<<"YES\n";return;}
        
        
    
    cout<<"NO\n";return;

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