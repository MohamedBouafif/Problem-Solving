        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair
        
        void solve()
        {
            /*LOOK for better implementation (of course it exists) */
            int x,y,k;
            cin>>x>>y>>k;
            if(k==1)cout<<x<<" "<<y<<endl;
            else if(k%2==0)
            {
                if(x==0&&y==0)
                {
                    for(int i = 1;i<=k/2;i++)
                    {
                        cout<<i<<" "<<i<<endl;
                        cout<<-i<<" "<<-i<<endl;
                    }
                }
                else
                {
                    cout<<2*x*k<<" "<<2*y*k<<endl;
                    cout<<-x*k<<" "<<-y*k<<endl;
                    for(int i=1;i<=(k-2)/2;i++)
                    {
                        cout<<i<<" "<<i<<endl;
                        cout<<-i<<" "<<-i<<endl;
                    }
                }
            }
            else
            {
                cout<<x*k<<" "<<y*k<<endl;
                for(int i = 1;i<=(k-1)/2;i++)
                {
                    cout<<i<<" "<<i<<endl;
                    cout<<-i<<" "<<-i<<endl;
                }
            }
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