#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    set<int> b;
    for(int i = 0;i<m;i++){
        int x;
        cin >>x;
        b.insert(x);
    }
    int it = 1;
    for(auto& c:s){
        it++;
        if(c =='B'){
            while(b.count(it))it++;
        }
        b.insert(it);
        if(c =='B'){
            while(b.count(it))it++;
        }
    }
    cout << b.size() << "\n";
    for (int cell : b) cout << cell << " ";
    cout << "\n";
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
