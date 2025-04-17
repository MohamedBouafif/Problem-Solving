#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n, m;
    cin >> n;
    m = n + 2;
    vector<ll> b(m);
    ll s = 0;
    map<ll, int> mp;

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        s += b[i];
        mp[b[i]]++;
    }
    bool ok = 0;
    for (int i = 0; i < m; i++)
    {
        ll x = s - 2 * b[i];
    
        if (mp.count(x))
        {
            
            if (x == b[i] && mp[x] > 1)
            {
                mp[x] -= 2;
                ok = 1;
                break;
            }
            else if(x!=b[i])
            {
                mp[x] -= 1;
                mp[b[i]]-=1;
                ok = 1;
                break;
            }
        }
    }
    if (ok)
    {
        for (int i = 0; i < m; i++)
        {
            if (mp[b[i]] != 0){
                cout << b[i] << " ";
                mp[b[i]]--;
        }
        }
        cout << endl;
        return;
    }

    cout << -1 << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    cin >> q;
    while (q--)
    {
        solve();
    }
}
