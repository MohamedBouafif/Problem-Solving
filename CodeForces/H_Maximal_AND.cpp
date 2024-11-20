#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)size(x)

using ll = long long;
using vl = vector<ll>;
using vi = vector<int>;
using vc = vector<char>;
using vpi = vector<pair<int,int>>;

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
ll MSB(int n)
{
    int k = __builtin_clz(n);
    return 31 - k;
}
void solve()
{
    ll n , k;
    cin >> n >> k;
    vi a(n);
    vi occ_bit_zeros(31, 0);
    ll res;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i]; 
        if(i == 0)res = a[i];
        else res= res & a[i];
    }
  
    

    for(int i = 30; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if((a[j] & (1LL << i) ) == 0) occ_bit_zeros[i] ++;
        }
    }
    

    ll ans = 0;
    for(int i = 30; i >= 0; i--)
    {
        if(occ_bit_zeros[i] <= k && occ_bit_zeros[i] > 0)
        {
            ans += (1LL << i);
            k-=occ_bit_zeros[i];
        }
    }
    cout<<ans+res<<endl;
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
