#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    s.insert(s.begin(),'L');
    s.insert(s.end(),'L');
    int i = 0;
    while(i<n+1){
        int j = i + m;
        while(s[j] != 'L' && j>i)
        {
            j--;
        }
        //cout<<j<<endl;
        if(j==i)   //mal9ech L
        {
            j+=m;
            if(s[j]=='C') // keni C ymout sinon ynagez fil me
            {
                cout<<"NO\n";
                return;
            }
            else
            {
                i = j; // lehne s[i] = w
                while(s[i]!='L' && i < n+1 && k>0 && s[i]!='C') // lezmou y3oum l2a9reb L 
                {
                    //l8alta enou ma9ritch 7seb yo3rodhni crocodile e5r
                    i++;k--;
                    
                        
                }
                
                if(s[i]!='L')
                {
                    cout<<"NO\n";
                    return;
                }
                
            }
        }
        else i = j; // Ynajm ynagez wiji 3ala L
        

    }
    cout<<"YES\n";

    
    
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