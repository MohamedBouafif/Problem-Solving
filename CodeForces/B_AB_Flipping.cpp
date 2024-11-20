#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0; 
        int seq = 0; 
        for(int i = 0 ; i < n - 1 ;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                seq ++;
                int nbA = 1, nbB = 1;
                for(int j = i-1; j>=0;j--)
                {
                    if(s[j]=='B')break;
                    else nbA++;
                }
                for(int j = i +2; j< n;j++)
                {
                    if(s[j]=='A')break;
                    else nbB++;
                }
                
                ans+=nbA+nbB-1;
            }
        }
        if(seq!=0) seq--;
        cout<<ans+seq <<endl;
        
    }
}