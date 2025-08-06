#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    string l,r;
    cin >> l >> r;
    int n = l.size();
    int ans = 0;
    bool x = 0;
    for(int i = 0 ; i <  n; i++){
        int d = 0;
        if((r[i] - '0') >= (l[i] - '0')) d = (r[i] - '0') -(l[i] - '0');
        else d = ((r[i] - '0')  - (l[i] - '0') )+ 10 ;
        
        
        if(d>=2){
            break;
        }
        if(d==1){
            if(!x){
                ans++;
                x = 1;}
            else break;
            
            
        }else {
            if(x){break;}
            else ans+=2;
        }
    }
    cout<<ans<<endl;
}

int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}