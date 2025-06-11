#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n,-1);
    set<int> s;
    for(int i = 3;i<= n;i++)s.insert(i);
    v[0] = 1;
    v[n - 1] = 2;
    int x = n;

    for(int i = 1;i<n - 1;i+=2){
        v[i] = x;
        s.erase(x);
        x--;
    }
    for(int i = 0 ; i < n;i++){
        if(v[i] == -1){
            v[i] = *s.begin();
            s.erase(s.begin());
        }
    }
    for(auto e:v)cout<<e<<" ";
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
 
    while (t--)
    {
        solve();
    }
}
