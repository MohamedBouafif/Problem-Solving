#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> pref_xor(n);
    pref_xor[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        pref_xor[i] = pref_xor[i + 1] ^ a[i];

    set<int> s;
    
    if (a[n - 1] != b[n - 1])
    {
        cout << "NO\n";
        return;
    }
    else
    {
        s.insert(b[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {

            int j = -1;

            for (int bit = 30; bit >= 0; bit--)
            {
                if (b[i] & (1 << bit))
                {
                    j = bit;
                    break;
                }
            }

            int y = 0;
            
            if (j != -1)
            {
                for (int bit = j; bit >= 0; bit--)
                {
                    if (!(pref_xor[i] & (1 << bit)))
                    {
                        y |= (1 << bit);
                    }
                }
            }
            
            if (pref_xor[i] == b[i] ||s.find(y) != s.end() || (s.find(a[i]) != s.end()&& a[i] == b[i]))
            {
                s.insert(pref_xor[i]);
                continue;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
