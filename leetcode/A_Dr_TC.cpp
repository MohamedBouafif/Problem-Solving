#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int count1 = 0;
   for(int i = 0 ; i < n ;i++){
        count1 += s[i] - '0';
   }
   int ans = 0;
   for(auto e:s){
    if(e == '1') ans += count1 - 1;
    else ans += count1 + 1;
   }
   cout<<ans<<endl;
    
   
    



}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}