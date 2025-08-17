#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{  
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> occ;
    for(auto e:s)
        occ[e]++;
    if(occ['1'] <= k ||occ['0'] == n || k > n/2)cout<<"Alice \n ";
    else cout<<"Bob\n";
    
    
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}