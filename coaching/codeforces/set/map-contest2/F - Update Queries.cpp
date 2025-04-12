#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> ind(m);
    for (int &x : ind)
        cin >> x;
    sort(ind.begin(), ind.end());
    string c;
    cin >> c;
    sort(c.begin(), c.end());
    map<int, char> mappedby;
    int j = 0;
    for (auto e : ind)
    {
        if (!mappedby.count(e))
        {
            mappedby[e] = c[j];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(mappedby.count(i+1)){
            s[i] = mappedby[i+1];
        }
    }
    cout<<s<<endl;
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
