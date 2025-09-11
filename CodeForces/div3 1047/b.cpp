#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll a, b;
    cin >> a >> b;
    
    if (b % 2 && a % 2) // both odd
    {
        cout << a * b + 1 << endl;
    }
    else if (b % 2 && !(a % 2)) // b odd, a even
    {
        cout << -1 << endl;
    }
    else if (!(b % 2) && a % 2) // b even, a odd
    {
        if ((b/2) % 2)
            cout << -1 << endl;
        else 
            cout << a * (b / 2) + 2<< endl;
    }
    else if (!(b % 2) && !(a % 2)) // both even
    {
        cout << a * (b / 2) + 2<< endl;
    }
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    return 0;
}