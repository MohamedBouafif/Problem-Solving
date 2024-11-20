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
    int n;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    vi p(n);
    p[0] = -1;
    for(int i = 1; i < n; i++)
    {
        if(v[i]==v[i-1])p[i]=p[i-1];
        else p[i] = i-1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        --l;--r;
        if(p[l]==p[r])cout<<"-1 -1\n";
        else{
            cout<<p[r] + 1<<" "<<r+1<<endl;
            
        }
    }
    

    
    
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
