#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    int n;
    cin>>n;
    vector<int>s(n);
    map<int,int> occ;
    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
        occ[s[i]]++;
    }
    
    for(auto e:occ)
    {
        if(e.second<2)
        {
            cout<<-1<<endl;
            return;
        }
    }
    vector<int> perm(n);
    for(int i = 0;i<n;i++)perm[i] = i+1;
    for(int i = 0;i<n - 1 ;i++)
    {
        if(s[i]==s[i+1])
        {
            swap(perm[i],perm[i+1]);
        }
        
        
    }
    for(int  i = 0;i<n -1;i++)
        if(perm[i]==i+1){cout<<"-1\n";break;}
    for(auto e:perm)cout<<e<<" ";
    
    cout<<endl;

}
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}