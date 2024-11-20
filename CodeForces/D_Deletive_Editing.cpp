#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    string s,t;
    cin>>s>>t;
    unordered_map<char,int> occs;
    unordered_map<char,int> occt;
    for(auto e:t)
    {
        occt[e]++;
    }
    for(auto e:s) occs[e]++;
    int curront_pos=-1;
    string res;
    for(int j = 0;j<t.size();j++)
    {
      
        int occint = occt[t[j]];
        int occins = occs[t[j]];
        if(occins==0||occins<occint){cout<<"NO\n";return;}
        int initialposition = occins - occint+1;
        
        for(int i = curront_pos +1; i < s.size();i++)
        {
            occs[s[i]]=max(0,--occs[s[i]]);
            if(s[i]==t[j])
                initialposition--;
            if(initialposition==0){res+=s[i];curront_pos=i;occt[s[i]]--;break;}
            
        }
    }
    if(res==t)cout<<"YES\n";
    else cout<<"NO\n";

    


}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}