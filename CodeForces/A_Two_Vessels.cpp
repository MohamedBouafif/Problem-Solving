    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            int ans = abs(a-b)/(c*2);
            
            if(a<b){a+=ans*c;b-=ans*c;}
            else if (b<a){b+=ans*c; a-=ans*c;}
            if(a!=b)cout<<ans+1<<endl;
            else 
            cout<<ans<<endl;
            
        
        }
    }