#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char mat[n][m];
        for(int i =  0 ; i <n;i++)
            for(int  j  = 0; j < m;j++)
                cin>>mat[i][j];

        int ligne1=0,ligne2=0, colonne = 0;
        for(int i = 0; i < n;i++)
        {
            for(int  j = 0; j < m;j++)
            {
                if(mat[i][j]=='#')
                {
                    ligne1=i;
                    colonne= j;
                    break;
                }
            }
        }
        for(int i = n-1; i >=0 ;i--)
        {
            for(int j = m-1;j>=0;j--)
            {
                if(mat[i][j]=='#')
                {
                    ligne2= i;
                    break;
                }
            }
        }

        cout<<ligne1 + (ligne2-ligne1)/2 + 1<<" "<<colonne + 1<<endl;
        

    }
    

}