#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>prev_pos(k,0), a(n);

    map<int,vector<int>> value_jump;

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        int distance = (i+1) - prev_pos[a[i] - 1] - 1;
        prev_pos[a[i] - 1] = i+1;
        value_jump[a[i]] .push_back(distance);
    }
    for(int i = 0; i < k; i++)
{
    int distance = n + 1 - prev_pos[i] - 1;
    value_jump[i + 1].push_back(distance);
}

    int m =1e9;
    for(auto &e: value_jump){
        sort(e.second.begin(),e.second.end(),greater<int>());
        e.second[0] /=2; //akber valeur na9smou 3ala thnin
    }
    
    for(auto &e: value_jump){
        sort(e.second.begin(),e.second.end(),greater<int>());
        m = min(m,e.second[0]); // n3awed nsorty 5ater ynajm ykoun fama valeur theni akber 
    }
    cout<<m<<endl;
    
    
   

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