#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, k;
    cin >> n >>k;
    vector<int> s(n),t(n);
    for(int i = 0 ; i < n;i++)cin >> s[i]; 
    for(int i = 0 ; i < n;i++)cin >> t[i]; 
    map<int,int> mp;
    vector<vector<int>> v;
    for(auto e:t)mp[e%k]++;
    for(int  i = 0 ; i < n;i++)
    {
        int x = s[i]%k, y = k - s[i]%k;
        if(mp[x] && !mp[y])mp[x]--;
        else if (mp[y] && !mp[x])mp[y]--;
        else v.push_back({x,y});
    }
    for(auto e:v)
    {
        if(mp[e[0]])mp[e[0]]--;
        else if(mp[e[1]])mp[e[1]]--;
    }
    for(auto e:mp)
        if(e.second){cout<<"NO\n";return;}  
    cout<<"YES\n";  

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