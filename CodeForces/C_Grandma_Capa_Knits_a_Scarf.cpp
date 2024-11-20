#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n ;
    string a;
    cin>>n>>a;
    int ans = n+1;
    for(int  c = 0; c < 26;c++)
    {
        int l = 0, r = n-1 , cnt = 0;
        while(l<r)
        {
            if(a[l]==a[r]){l++;r--;}
            if(a[l] != a[r])
            {
                if(a[l]==(char)(c + 'a')){l++;cnt++;}
                else if(a[r]==(char)(c + 'a')){r--;cnt++;}
                else {cnt = n+1;break;}
            }
        }
        ans = min(ans,cnt);
    }
    if(ans == n+1)cout<<-1<<endl;
    else cout<<ans<<endl;
    

}

        


int main()
{
        
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }    
        
}