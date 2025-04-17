#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int> p(2*n);
    int m = n*2;
    
    set<int> s;
    for(int i = 1;i<=2*n;i++)s.insert(i);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++)
        {
            int pos = i + j + 1 + 1;

            cin>>p[pos - 1];
            if(s.find(p[pos-1])!=s.end())s.erase(p[pos-1]);
        }
    for(auto e:p){
        if(e==0)cout<<*s.begin()<<" ";
        else cout<<e<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}