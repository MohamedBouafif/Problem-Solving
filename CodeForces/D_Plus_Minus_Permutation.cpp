#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll ppcm = x * y / gcd(x, y);

    ll a = n - n/x + n/ppcm + 1;
    ll b = n/y - n/ppcm;

    ll s1 = (n - a + 1) * (n + a) / 2;
    ll s2 = b * (b + 1) / 2;

    cout<<s1-s2<<endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        solve();
    }
}