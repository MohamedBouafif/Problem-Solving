#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll a,b;
    cin >> a >>b;
    ll ans = -1;
    ll mp = -1 , mi = -1;
    for(int i = b-1;i>=2 ;i--)
    {
        if(mp!=-1 && mi != -1)break;
        if(b%i == 0)
        {
            if (i%2 == 0 && mp== -1)mp = i;
            if(i%2 && mi == -1)mi = i;
        }
    }
    if(mp == -1 && mi == -1)cout<<-1<<endl;
    if(b%2==0){
        if(a%2 == 0)cout<<a*max(mi,mp) + b/i<<endl;
        if(a%)
    }
    if(a%2) cout<<
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
