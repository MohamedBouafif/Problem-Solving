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

void solve()
{
    int n;
    ll ans = 0;
    cin>>n;
    vi a(n), pos;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]  <  i + 1 )pos.push_back(i + 1);
    }
    
   
    int N = pos.size();
    for(int j = N - 1 ; j >= 0 ; j--)
    {
        int X = a[pos[j] - 1] -1;
        int l = -1 , r = N;
        while(l + 1  < r )
        {
            int m = (r + l)/2;
            if(pos[m] <= X ) l = m;
            else r = m;
        }
        if(l!= -1 )ans+= l+1;
    } 
    cout<<ans<<endl;

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
