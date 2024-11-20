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
    vi v1, v2;
        for(int i = 1;i<=n;i++){
            if(i%2!=0 && i!= 3 && i != 5)v1.push_back(i);
            else if(i%2 == 0 && i!= 4 && i!= 2)v2.push_back(i);
        }
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end());
    if(n<=4)cout<<-1<<endl;
    else if(n==5){
        cout<<"1 3 5 4 2"<<endl;
    }
    else{
        for(int i  = 0, j = v1.size()-1; i < j  ;i++,j--){
            cout<<v1[i]<<" "<<v1[j]<<" ";
        }
        if(v1.size()%2!=0)cout<<v1[v1.size()/2]<<" ";
        cout<<"3 5 4 2 ";
        for(int i = 0;i<v2.size();i++)cout<<v2[i]<<" ";
        cout<<endl;
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
