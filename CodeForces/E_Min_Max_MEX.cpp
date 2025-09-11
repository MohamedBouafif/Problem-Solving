#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> nums(2e5 + 1, 0);

bool check(vector<int> &v, int k, int m)
{
    int current_mex = 0;
    int cnt = 0;
    for (int i = 0; i < v.size() ; i++)
    {
        if(v[i] <= v.size()  + 1 )
            nums[v[i]] = 1;

        while (nums[current_mex])
        {
            current_mex++;
        }

        if (current_mex >= m)
        {
            cnt++;
            for (int j = 0 ; j < min(m + 1,(int)v.size() + 2); j++)
                nums[j] = 0;
            current_mex =0;
        }
    }
    for(int i = 0 ; i <= v.size() + 1 ; i++)
        nums[i] = 0;
    
    return cnt >= k;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = 1e9;
    while (r - l > 1)
    {
        int m = (r + l) / 2;
        if (check(v, k, m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout<<l<<endl;
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