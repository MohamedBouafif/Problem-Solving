#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1e6 + 1;
vector<int> divisors(MAXN, 0);

void sieveDivisors() {
    for (int i = 1; i < MAXN; i++) {
        for (int j = i; j < MAXN; j += i) {
            divisors[j]++;
        }
    }
}
void solve()
{
    sieveDivisors();
    for(int i = 0 ;i < 11;i++)cout<<divisors[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}