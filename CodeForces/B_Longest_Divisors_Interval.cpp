#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll n;
vector<ll> divisors(ll n)
{
	vector<ll> v;
	for(ll i = 1; i * i <= n;i++)
	{
		if(n%i == 0) v.push_back(i);
	}
	return v;
}
void solve()
{
	cin>>n;
	ll ans = 1;
	for(ll i = 2;  i <=n; i++)
	{
		if(n%i==0) ans++;
		else break;
	}
	cout<<ans<<endl;

	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	return 0;
}