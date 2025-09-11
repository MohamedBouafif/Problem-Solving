#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n , m , k;
    cin >> n >> m >> k;
    k = (k + n - 1) / n;
    cout<< (k + (m-k))/(m-k+1)<<endl;
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