#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{  
    int n ;
    cin >> n;
    string a;
    cin >> a;
    int m;
    cin >> m;
    string b ,c;
    cin >> b >> c;
    string res1 , res2;
    for(int i = 0 ; i < m;i++){
        if(c[i] == 'D')res1+=b[i];
        else res2+=b[i];
    }
    reverse(res2.begin(), res2.end());
    cout<<res2+a+res1<<endl;
    
    
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