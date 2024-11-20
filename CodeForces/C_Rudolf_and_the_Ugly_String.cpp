#include <bits/stdc++.h>
using namespace std;
int countfreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 

    for (int i = 0; i <= N - M; i++) {
        
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        if (j == M) {
            res++;
        }
    }
    return res;
}
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    string s1 = "map" , s2 = "pie" , s3 = "mapie";
    int ans = 0; 
    int cnt1 = countfreq(s1,s), cnt2= countfreq(s2,s),cnt3=  countfreq(s3,s);
    if(cnt3!=0)cnt3-=2*cnt3;
    cout<<cnt3 +cnt1+cnt2<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

}