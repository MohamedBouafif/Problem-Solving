#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
bool test_appearance(string original, string t)
{
    
    int n = original.size(), m = t.size();
    for(int i = 0;i<n;i++)
    {
        if(original[i] == t[0])
        {
            int k = i, j = 0;
            while(k<n && j<m && original[k] == t[j])
            {
                k++;j++;
            }
            if(j==m){
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    /*
    Pingeonhole  Principle :

        string s of length n has at least 26 + 26*26 + 26*26*26 substring of length <= 3
        so the "pingoen" are 26 + 26*26 + 26*26*26 = X and the "pingoen hole " are n - 3
        ceil(X/n-1) = 1 which mean at least one pinegoen hole has one 1 item 
        -> there are pingeonholes without items 
        -> it must exist at least a sub of length 1 or 2 or 3 that doesnt exist in s
        
    */
    string mex="a" ;
    bool t1 = 1, t2 = 1,t3  = 1;
    for(int i = 0;i<26;i++)
    {
        t1 = test_appearance(s,mex);
        if(!t1){cout<<mex<<endl;return;}
        else mex[0]++;
    }
    if(t1)
    {
        mex = "aa";
        for(int i = 0;i<26;i++)
        {
            for(int j = 0;j<26;j++)
            {
                t2 = test_appearance(s,mex);
                if(!t2){cout<<mex<<endl;return;}
                else mex[1]++;
            }
            mex[1] = 'a';
            mex[0]++;
        }
    }
    if(t2)
    {
        mex ="aaa";
        for(int i = 0;i<26;i++)
        {
            for(int j = 0;j<26;j++)
            {
                for(int k = 0;k<26;k++)
                {
                    t3 = test_appearance(s,mex);
                    if(!t3){
                        cout<<mex<<endl;
                        return;
                    }
                    else mex[2]++;
                }
                mex[2]='a';
                mex[1]++;
            }
            mex[1]='a';
            mex[0]++;
        }
    }

    

    
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