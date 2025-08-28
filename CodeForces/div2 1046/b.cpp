#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v(n);
    int m = 1, M = n;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int x = 0;
        while (j < n && s[j] == s[i] && s[j] == '1')
        {
            v[j] = m;
            m++;
            x++;
            j++;
            if (x >= k)
            {
                cout << "NO\n";
                return;
            }
            
        }

        if(j<n && s[j]== '0')
        {
            v[j] = M;
            M--;
        }
        i = j;
    }
    cout << "YES\n";
    for (auto e : v)
        cout << e << " ";
    cout << endl;
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