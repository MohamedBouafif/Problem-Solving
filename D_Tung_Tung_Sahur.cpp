#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string p,s;
    cin>>p>>s;
    int n = p.size(), m = s.size();
    if(m<n)cout<<"NOs\n";
    else{
        int M = 0;
        int j = 0;
        for(int i = 0;i<n;i++)
        {
            int cnt1 = 1;
            if(p[i]!=s[j]){
                cout<<"NO\n";
                // cout<<"i = "<<i<<"j = "<<j<<endl;
                return;

            }
            while(i+1<n && p[i]==p[i+1]){
                cnt1++;
                i++;
            }
            
            int cnt2 = 1;
            // cout<<"j de5el"<<j<<endl;
            while(j+1 < m && s[j] == s[j+1]){
                cnt2++;
                j++;
                
            }
            if(cnt2 < cnt1 || cnt2 > 2*cnt1){
                cout<<"NO\n";
                return;
            }
            j++;
        }
         
        if(j!=m)cout<<"NO\n";

        else cout<<"YES\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}