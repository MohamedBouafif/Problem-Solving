#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n ;
    int b[n];
    for(int i = 0;i<n;i++)cin >>b[i];
    ll x = 1;
    
    for(int i = 0;i<n-1;i++){
        if(b[i+1]%b[i]){
            x=lcm(x,b[i]/(gcd(b[i],b[i+1])));
        }
        
    }
    cout << x << "\n";
    
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
