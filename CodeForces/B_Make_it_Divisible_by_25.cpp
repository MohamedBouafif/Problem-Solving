    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        //calculate the distance between 0&0 2&5 7&5  5&0
        string s;
        cin>>s;
        
        int n = s.size();
        int cost00 = 19,cost25=19,cost75=19,cost50=19;
        for(int i = n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                for(int j = i-1;j>=0;j--)
                {
                    if(s[j]=='0'){cost00 = min(cost00,i - j - 1 + n - 1 - i);}
                    if(s[j]=='5'){cost50 = min(cost50,i - j - 1 + n - 1 - i);}
                }
            }
            if(s[i]=='5')
            {
                for(int j = i-1;j>=0;j--)
                {
                    if(s[j]=='7'&&cost75==19){cost75 = min(cost75,i - j - 1 + n - 1 - i);}
                    if(s[j]=='2'&&cost25==19){cost25 = min(cost25,i - j - 1 + n - 1 - i);}


                }
            }
            
        }
        cout<<min(cost00,min(cost25,min(cost75,cost50)))<<endl;

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