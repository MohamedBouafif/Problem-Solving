#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        
        ll sa = 0, sb = 0;
        for (ll &x : a)
        {
            cin >> x;
            sa += x;
        }
        for (ll &x : b)
        {
            cin >> x;
            sb += x;
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        if (a[0] >= b[m - 1])
        {
            if (k % 2)
            {
                cout << sa << endl;
            }
            else
                cout << sa - a[n - 1] + b[0] << endl;
        }
        else
        {
            if (k % 2)
            {
                cout << sa - a[0] + b[m - 1] << endl;
            }
            else
                cout << sa - a[0] + b[m - 1] - max(b[m - 1], a[n - 1]) + min(a[0], b[0])<< endl; 
        }
    }
}