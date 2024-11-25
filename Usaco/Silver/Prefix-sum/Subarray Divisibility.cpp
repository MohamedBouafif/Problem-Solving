#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)size(x)

using ll = long long;
using vl = vector<ll>;
using vi = vector<int>;
using vc = vector<char>;

ll MOD = 998244353;
/*const int MAXN = 1e6;
long long fac[MAXN + 1];
long long inv[MAXN + 1];*/

vl psum(const vl& a)
{
    vl psum(sz(a) + 1);
    for(int i = 0; i< sz(a);i++)psum[i + 1] = psum[i] + a[i];

    return psum;
}

ll gcd(ll a,ll b)
{
    if(b==0)return a;
    else return gcd(b, a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
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
int lowbit(int x) {
    return x & (-x);
}

 
ll power(ll a, ll b, ll mod = 1e9 + 7) {
    ll result = 1;
    while (b > 0) {
        if (b & 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}
int xorFrom1To(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}
int phi(int n) {//counts the number of positive integers in the interval [1,n] which are coprime to n
	int ans = n;
	for (int p = 2; p * p <= n; p++) {
		if (n % p == 0) {
			while (n % p == 0) { n /= p; }
			ans -= ans / p;
		}
	}
	if (n > 1) { ans -= ans / n; }
	return ans;
}
vector<int> dp;
vector<vector<pair<int, int>>> adj;
vector<bool> visited;
 
void dfs(int node, int parent, int wa9techdhohret) {
    visited[node]=1;
    for (auto& e : adj[node]) {
        int next = e.first;
        if (next != parent && !visited[next]) {
            if (e.second < wa9techdhohret) {
                dp[next] = dp[node] + 1;
            } else {
                dp[next] = dp[node];
            }
            dfs(next, node, e.second);
        }
    }
}
struct rect {
    ll x1, y1, x2, y2;
    ll area() { return (x2 - x1) * (y2 - y1); }
};
 
ll intersection(rect a, rect b) {
    ll x = max(0ll, min(a.x2, b.x2) - max(a.x1, b.x1));
    ll y = max(0ll, min(a.y2, b.y2) - max(a.y1, b.y1));
    return x * y;
}


ll exp(ll x, ll n, ll m) {
	x %= m;
	ll res = 1;  
	while (n > 0) {
		if (n % 2 == 1) { res = res * x % m; }
		x = x * x % m;
		n /= 2;
	}
	return res;
}
/*
void factorial() {
	fac[0] = 1;
	for (int i = 1; i <= MAXN; i++) { fac[i] = fac[i - 1] * i % MOD; }
}

void inverses() {
	inv[MAXN] = exp(fac[MAXN], MOD - 2, MOD);
	for (int i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % MOD; }
}

ll choose(int n, int r) { return fac[n] * inv[r] % MOD * inv[n - r] % MOD; }

*/
#define PI 3.14159265
//result = sin (param*PI/180);

void solve()
{
    /*freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);*/
    int N;
    cin>>N;
    
    int pref_modN = 0;
    map<ll,ll> current_prefix;
    current_prefix[0] = 1;
    ll ans = 0;
    for(int i = 0; i < N;i++)
    {
        ll a;
        cin>>a;
        pref_modN = (pref_modN%N + a%N + N)%N; // add N to have a correct answer on negative numbers
        
        ans+=current_prefix[pref_modN];
        current_prefix[pref_modN]++;
    }
    
    cout<<ans<<endl;

}
    

    
    

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    
    while(q--)
    {
        solve();
    }
    
  

    
}
