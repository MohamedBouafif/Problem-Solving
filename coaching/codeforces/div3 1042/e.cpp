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
    {
        if(a[i] == b[i])pref_xor[i] = a[i];
        else  pref_xor[i] = pref_xor[i + 1] ^ a[i];

    }
    // for(auto e:pref_xor)cout<<e<<" ";
    // cout<<endl;
    set<int> s;

    if (a[n - 1] != b[n - 1])
    {
        cout << "NO\n";
        return;
    }

    s.insert(b[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if(a[i] == b[i])
        {
            s.clear();
            s.insert(a[i]);
            continue;
        }
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
        // cout<<"y = "<<y<<endl;
        if(b[i] == 0 && s.find(pref_xor[i])!=s.end())
        {
            continue;
        }
        if(b[i] == pref_xor[i] || s.find(y)!=s.end())
        {
            s.insert(pref_xor[i]);
            
        }
        else {
            cout<<"NO\n";
            return;
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
