#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    vector<string> v(3);
    for(int i = 0;i<3;i++)cin>>v[i];
    for(int i = 0;i<3;i++)cout<<v[i][0];
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}