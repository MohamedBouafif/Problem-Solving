
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int t;
string s;
void solve()
{
    cin>>s;
    int n = s.size();
    ll ones = 0;
    ll ans = 0;
    for(int i = 0; i < n;i++)
    {
        if(s[i] == '1') ones++;
        else if(ones !=0 ) ans+= ones + 1;
    }
    cout<<ans<<endl;
}
int main()
{
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}