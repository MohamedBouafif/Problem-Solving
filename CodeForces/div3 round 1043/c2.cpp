#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    my idea:
    1/ cost to by 3^x = 3^(x+1) + x * 3^(x - 1)
    2/ n <= 10 power 9 , so n = a0 * 3^0 + a1 * 3^1 + ... + a19 * 3^19 (because log base 3 of 10^9 <= 19)
    3/ 1 deal to by 3^x = 3 deals to by 3^(x-1)
    4/ which is better to buy 3^x with 1 of 3^x or 3 deals of  3^(x-1)
    5/ cost[x] = cost(3^x)  if i do cost[x] - cost[x-1] i will find that cost[x] = 3^cost[x-1] + 3^(x-1) 
    6/ its better to do 3 deals of cost(x-1) since the function is exponentional 
    7/  if n in base 3 = 1 0 1 than i need at least k = 2 to buy n watermalon
        i can make it 1 3 0 and like that i do 4 deals which is k - 1 + 3 
        look line 69 

*/
const int N = 19;
ll power_3[N + 1] = {1};
ll cost[N + 1] = {3};

void solve()
{
    for (int i = 1; i <= N; i++)
    {
        power_3[i] = power_3[i - 1] * 3LL;
    }

    for (int i = 1; i <= N; i++)
    {
        cost[i] = 3LL * cost[i - 1] + power_3[i - 1];
    }

    ll n, k;
    cin >> n >> k;

    stack<ll> s;
    ll temp = n;
    vector<ll> v;
    while (temp)
    {
        s.push(temp % 3);
        temp /= 3;
    }

    ll ans = 0;
    
    while (!s.empty())
    {
        v.push_back(s.top());
        ans += s.top();
        s.pop();
    }

    if (k < ans)
    {
        cout << -1 << endl;
        return;
    }

    int m = v.size();
    

    reverse(v.begin(), v.end());

    for (int i = m - 1; i >= 1; i--)
    {
        ll x = (k-ans)/2;
        x =  min(v[i], x);
        ans +=x*2;
        v[i-1] += 3*x;
        v[i]-=x;
    }

    
    ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans += v[i] * cost[i];
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}