#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        string a,b;
        cin>>a>>b;
        int ans = a.size() + b.size();
        // x= maximum length of a substring of b that is a sebsequence of a
        int x = 0;
        for(int i = 0;i<b.size();i++) // going to check for each character in b if it is in a 
        {
            int ptr = 0;
            for(int j = 0;j<a.size();j++)
            {
                if((i+ptr) < b.size() && b[i+ptr] == a[j])ptr++; // if the character is in a than i check the character after it 
            }
            x = max(x,ptr);
        }
        cout<<ans-x<<endl;

        
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