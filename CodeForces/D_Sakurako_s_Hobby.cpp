#include "bits/stdc++.h"
using namespace std;
#define ll long long




void solve()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i = 0;i<n;i++)cin>>p[i];
    string ch;
    cin>>ch;
    map<int,int> mp;
    for(int i = 0;i<n;i++)
    {
        if(!mp.count(i+1))
        {
            int x = 0;
            set<int> s;
            int initial = i + 1;
            if(ch[i]=='0')x++;
            do
            {
                s.insert(i+1);
                if(ch[i]=='0'&&i + 1 != initial) x++;
                i = p[i] -1;
                
            } while (i + 1 != initial);
            
            
            for(auto e:s)
            {
                mp[e] = x;
            }
        }
    }
    for(auto e:mp)cout<<e.second<<" ";
    cout<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}