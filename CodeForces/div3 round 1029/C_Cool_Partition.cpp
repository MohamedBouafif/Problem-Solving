#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ;i < n;i++)cin>>v[i];
    int ans= 1;
    set<int> s1 , s2;
    s1.insert(v[0]);
    for(int i = 1 ;i < n;i++){
        if(s1.empty()){
            ans++;
            while(!s2.empty()){
                s1.insert(*s2.begin());
                s2.erase(s2.begin());
            }
        }
        if(s1.find(v[i])!=s1.end())s1.erase(v[i]);
        s2.insert(v[i]);
    }
    if(s1.empty())ans++;
    cout<<ans<<endl;



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
