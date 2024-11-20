
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int y = 1; 
        int ans = y; 
        int m = gcd(x,y) + y;
        y++;
        for(;y<x;y++)
        {
            
            int m1 =  gcd(x,y) + y;
            if(m1>m)
            {
                ans  = y;
                m = m1;
            }
        }
        cout<<ans<<endl;
    }
}