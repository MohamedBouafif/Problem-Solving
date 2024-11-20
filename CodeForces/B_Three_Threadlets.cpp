#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  a,b,c;
        cin>>a>>b>>c;
        if(a==b&&b==c)cout<<"YES\n";
        else
        {
            long long x= a+b+c;
          
            if((x/4) * 4 == x && x / 4 <= min(a,min(b,c)))
            {
                long long nb = x / 4;
                long long aa = a/ nb, bb = b/nb , cc = c/ nb;
                if(nb* aa + nb * bb + nb *cc == x)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if((x/5) * 5 == x&& x/5 <= min(a,min(b,c)))
            {
                long long nb = x / 5;
                long long aa = a/ nb, bb = b/nb , cc = c/ nb;
                if(nb* aa + nb * bb + nb *cc == x)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if((x/6) * 6 == x&& x/6 <= min(a,min(b,c)))
            {
                long long nb = x / 6;
                long long aa = a/ nb, bb = b/nb , cc = c/ nb;
                if(nb* aa + nb * bb + nb *cc == x)cout<<"YES\n";
                else cout<<"NO\n";
            }
            
            
        }
    }
}