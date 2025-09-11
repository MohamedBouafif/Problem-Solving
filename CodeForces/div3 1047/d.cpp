#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,vector<int>> val_pos;
    map<int,int> occ;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
        occ[v[i]]++;
        val_pos[v[i]].push_back(i);
    }
    for(auto e:occ)
    {
        if(e.second%e.first)
        {
            cout<<-1<<endl;
            return;
        }
    }
    int a = 1;
    int i = 0;
    vector<int> ans(n);
    set<int> positions;
    for(int i = 0 ; i < n;i++)
        positions.insert(i);
    
    while(!positions.empty())
    {
        i = *positions.begin();
        for(int j =1;j<= occ[v[i]];j+=v[i])
        {
            for(int k = j;  k< j+v[i];k++)
            {
                ans[val_pos[v[i]][k-1]] = a;
                positions.erase(val_pos[v[i]][k-1]);
            }
            a++;
        }
        
    }
    for(auto e:ans)cout<<e<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {

        solve();
    }
}
