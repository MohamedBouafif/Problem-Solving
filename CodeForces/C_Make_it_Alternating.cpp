#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)size(x)

using ll = long long;
using vl = vector<ll>;
using vi = vector<int>;
using vc = vector<char>;


vl psum(const vl& a)
{
    vl psum(sz(a) + 1);
    for(int i = 0; i< sz(a);i++)psum[i + 1] = psum[i] + a[i];

    return psum;
}


vi factor(int x)
{
    vi ret;
    for(int i = 2; i * i <=x;i++)
    {
        while(x%i == 0)
        {
            ret.push_back(i);
            x/= i;
        }
    }
    if(x>1) ret.push_back(x);
    return ret;
}

/* Seive
const int MAX_N = 1e6;
int max_div[MAX_N + 1];

void seive()
{
    for (int i = 2; i <= MAX_N; i++) {
		if (max_div[i] == 0) {
			for (int j = i; j <= MAX_N; j += i) { max_div[j] = i; }
		}
	}
}

int number_divisors(int n)
{
    
    int div_num = 1;
    while(n != 1)
    {
        int prime = max_div[n];
        int cnt =  0 ;
        while( n % prime == 0)
        {
            cnt ++;
            n /= prime;
        }
        div_num *= cnt + 1;
    }
    return div_num; 
}
*/

void solve()
{
    ll MOD = 998244353;
    string s;
    cin>>s;
    vector<ll> v;
    int min_op = 0;
    for(int i = 0;i<s.size();i++)
    {
        int j = i;
        while(s[j] == s[i]){
            j++;
        }
        if( j - i > 1){
            v.push_back( (ll)(j - i));
            min_op += j - i;
            i = j - 1;
        }
    }
    ll res =0 ,  factorial = 1;
    for(auto e:v){
        res += e%MOD;
    }
    for (int i = s.size(); i >= v.size(); i--)factorial *= i%MOD;
    res *= ((res%MOD)*(factorial%MOD))%MOD;
    cout<<min_op<<" "<<res<<endl;

}
    

    
    

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    
  

    
}
