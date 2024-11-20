#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int i = 2, j = 3;
    char  debut  = s[0];
    while(i<n && j  < n)
    {
        while(s[j] == debut && j < n) j++;
        
        
        debut  = s[i];
        i = j + 1;
        j = i+1;
        
    }
    if(j>n)cout<<"NO\n";
    else
        cout<<"YES\n";
    



}
int main()
{
    int tc=1;
    cin>>tc;

    while(tc--)
    {
        solve();
    }
}