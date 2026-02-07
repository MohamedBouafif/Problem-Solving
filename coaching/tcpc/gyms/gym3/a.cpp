#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double sum(vector<double> &v,double a)
{
    double ans = 0;
    int power = 1;
    for (auto c : v)
    {
        ans += c * powl(a, power) / (double)power;
        power ++;
    }
    return ans;
}

void solve()
{
    int n;
    double k;
    cin >> n >> k;
    vector<double> v(n);
    for (double &c : v)
        cin >> c;
    int iterations = 100;
    double l = -1, r = 1e12 + 1;
     double m = (l + r) / (double)2;
    while (iterations--)
    {
         m = (l + r) / (double)2;
        double s = sum(v,m);
        if (s > k)
            r = m;
        else if (s < k)
            l = m;  
        
            
    }
    cout << setprecision(7) <<m<< endl;
            return;
        

}

int main()
{
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve();
    }
}