    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair
    
    void solve()
    {
        ll  n, k;
        cin>>n>>k;
        ll nb_operations = 0;
        ll greates_pow = 0;
        ll Y = 1;
        if(k==1){cout<<n<<endl;return;}
        while(n >= Y)
        {
            Y*=k;
            greates_pow ++;
        }
        Y/=k;
        greates_pow--;
        while(n)
        {
            nb_operations+= n/Y;
            n = n%Y;
            Y/=k;
        }
        cout<<nb_operations<<endl;
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