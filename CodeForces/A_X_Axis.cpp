#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<max(x,max(y,z)) - min(x,min(y,z))<<endl;
    }
}