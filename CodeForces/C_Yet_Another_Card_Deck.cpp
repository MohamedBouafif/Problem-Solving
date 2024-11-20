#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n,q;
    cin>>n>>q;
    map<int,int> mp;
    for(int i = 1;i<=n;i++)
    {
        int color;
        cin>>color;
        if(!mp.count(color))
        {
            mp[color] = i;
        }
    }

    for(int i = 0;i<q;i++)
    {
       
        int t;
        cin>>t;
        cout<<mp[t]<<" ";
        for(auto &e:mp)
        {
            if(e.second<mp[t]){
                int x = e.second;
                e.second = x+1;
            }
        }
        mp[t] = 1;

    }

}
int main()
{
    int t = 1;
    while(t--)
    {
        solve();
    }
}