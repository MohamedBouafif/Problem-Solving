#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();

    ll mx_cons1 = 0, mxright = 0, mxleft = 0; 

    ll i = 0;   
    while (s[i] == '1' && i < n) i++;
    mxright = i;

    ll j = n - 1;  
    while (s[j] == '1' && j >= 0) j--;
    mxleft = n - 1 - j;

    ll current = 0;  
    for (ll k = i; k < n; k++)  
    {
        while (s[k] == '1')
        {
            current++;
            k++;
        }
        mx_cons1 = max(mx_cons1, current);
        current = 0;
    }
    if(mxright==n){cout<<n*n<<endl;return;}
    mxright+=mxleft;
    ll x = max(mxright,mx_cons1);
    ll ans = 0;
    for(int i = 1;i<=x;i++)
    {
        ans = max(ans,(x - i + 1)*i);
    }
    cout<<ans<<endl;
    
    
}

int main()
{
    ll tc;  
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
