    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        char mat[2][n];
        int first = 1e9,last= 0;
        for(int i = 0;i<2;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='.')
                {
                    first = min(first,j);
                    last  = max(last,j);
                }
                
            }
        }
        
        int ans = 0;
        for(int  i  = 0;i<2;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(mat[i][j]=='.' && mat[i][j-1]=='x'&&mat[i][j+1]=='x' && j>0 && j<n-1)
                {
                    if(i==0&&mat[i+1][j]=='.' && j>first && j<last) ans++;
                    else if (i==1 && mat[i-1][j]=='.' && j>first && j<last) ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
        

        


    int main()
    {
        int tc ;
        cin>>tc;
        while(tc--)
        {
            
            solve();
            
        }
    }