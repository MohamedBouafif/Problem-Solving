#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int nbz = 0;
    for(char c:s)if(c=='0')nbz++;
    if(!nbz){cout<<"DRAW\n";return;}
    if(nbz==1)cout<<"BOB\n";
    else if(n%2 != 0 && s[n/2] == '0')
    {
        cout<<"ALICE\n";//DIMA ZOUZ la5ranin bch ykamalhom bob 
    }
    else  if(n%2!=0 && s[n/1] =='1')cout<<"BOB\n";   //Dima zouz le5ranin ykmlhom Alice
    else cout<<"BOB\n";      //Dima zouz le5ranin ykmlhom Alice
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