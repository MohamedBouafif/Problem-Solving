    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int nbopening = 0,nbclosing = 0;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='(')nbopening++;
            if(s[i]==')')nbclosing++;
        }
        s[0]='(';
        nbopening++;
        for(int i  = 2;i<n;i+=2)
        {
            
            
            if(s[i-1]=='(' )
            {
                if(nbclosing<n/2){nbclosing++;s[i]=')';}
                else{s[i]='(';nbopening++;}
            }
            else
            {
                if(nbopening<n/2){nbopening++;s[i]='(';}
                else {s[i]==')';nbclosing++;}
                
            }

        }
        //cout<<s<<endl;
        ll cost = 0,closing = 0,opening = 0;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='('){
                int opening  = 1;
            for(int j = i+1;j<n;j++)
            {
                if(s[j]=='(')opening++;
                if(s[j]==')')
                {
                    opening--;
                    if(opening ==0){
                        cost+=(j+1) - (i+1);break;}
                    
                }
            }}
        }
        cout<<cost<<endl;
        
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