#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve() 
{
    int n;
    cin >> n;
    cout<< 2 * n<<endl;
    for(int i = 1 ; i <= n;i++){
        cout<<i<<" "<<"1 "<<i<<"\n";
        cout<<i<<" "<<min(i+1,n)<<" "<< n<<"\n";
    }

}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        solve();
    }
}