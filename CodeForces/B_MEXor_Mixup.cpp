#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool puis2(int x)
{
    for(int i = 0;i < 30;i++)
    {
        if(x & (1<<i) == (1<<i))return true;
    }
    return false;
}
void solve()
{
    int a,b;
    cin>>a>>b;
    int X;
    if(a%4 == 0 ){   
        X = 0;
    }
    else if (a%4 == 1) 
    {
       X = a-1;
    }
    else if(a%4 == 2)X= 1;
      
    else if(a%4 == 3 && b==a)X = a; 
    if(X==b)cout<<a;
    else if((X ^ b) != a)cout<<a+1; // NZID  Xor ^ b -> Xor ^ (Xor ^ b) = b 
    else cout<<a+2;
    cout<<endl;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}