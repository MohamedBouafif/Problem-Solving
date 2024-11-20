#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    //idea: 1/ compare cells from 0 to n/2 - 1  with cells from  n-1 to n/2 (+1 if n%2 !=0)
    //      2/ after comparing if k!=0 we have to check parity of n (n%2!=0 ok else check if k%2=0)

    int n,k;
    cin>>n>>k;
    int mat[n][n];
    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++)
            cin>>mat[i][j];
    for(int i = 0;i<= n/2 - 1;i++)
    {
        //if n = 5 , n/2 - 1 = 1 donc cell lwost mayouslhech (lezme il wost nchoufou palindromic wle)
        for(int j = 0;j< n;j++)
        {
            
            if(mat[i][j]!=mat[n-1-i][n-1-j])
            {
                if(!k)
                {
                    cout<<"NO\n";return;
                }
                k--;
            }
        }
        
    }
    if(n%2 !=0)
    {
        for(int j = 0;j<= n/2 ;j++)
        {
            if(mat[n/2][j]!=mat[n/2][n-1-j])
            {
                if(!k){cout<<"NO\n";return;}
                else k--;
            }
            
        }
    }
    if(k!=0)
    {
        if(n%2 !=0)cout<<"YES\n";
        else
        {
            if(k%2 !=0)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    else cout<<"YES\n";


}

int main()
{
    ll tc;  
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
