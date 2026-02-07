#include <bits/stdc++.h>
using namespace std;
using ll = long long ;


int main()
{
    double c;cin >>c;
    double l = 0 , r = c;
    int  n = 100;
    while(n--){
        double m = (l+r)/2;
        if((m*m) + sqrtf(m) >= c)
            r = m;
        else l = m;
    }
    
    cout<<setprecision(7)<<r<<endl;
}