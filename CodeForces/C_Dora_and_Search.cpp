#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (T x : v) os << x << " ";
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &x : v) is >> x;
    return is;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    //2ptr too much time to get the idea by myself
    int i = 0, j = n-1, M = n, m = 1;
    while(i<j+1)
    {
        if(v[i]==m){
            m++;
            i++;
        }
        else if(v[i]==M){
            M--;
            i++;
        }
        else if(v[j]==M){
            M--;
            j--;
        }
        else if (v[j]==m)
        {
            m++;
            j--;
        }
        else break;
    }
    if(abs(i-j)<=1)
    {
        cout<<-1<<endl;
    }
    else cout<<i+1<<" "<<j+1<<endl;

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