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
    int n,m,L;
    cin>>n>>m>>L;
    vi l(n),r(n), minjumpvalue(n);
    vpi pos_pow(m);
    for(int i = 0;i<n;i++)
    {
        cin>>l[i];
        cin>>r[i];
        minjumpvalue[i] = r[i] - l[i] + 2;
    }
    for(int i = 0; i < m; i++)
    {
        int position, power;
        cin >> position>> power;
        pos_pow[i].first = position;
        pos_pow[i].second = power;
       
    }
    
    int ans = 0 , power = 1 , j = 0;
    multiset <int> s;

    for(int i = 0; i < n; i++)
    {
        while(j < m && pos_pow[j].first < l[i])
        {
            s.insert(pos_pow[j].second);
            j++;
        }
        while(power < minjumpvalue[i] && !s.empty())
        {
            power += *prev(s.end());
            s.erase(prev(s.end()));
            ans++;
        }
        if(power < minjumpvalue[i])
        {
            cout<<"-1 \n";
            return;
        }
        
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
