#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    int M = 1, occ = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            M = max(v[i][j], M);
        }
    }
    vector<int> v1(n, 0), v2(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == M)
            {
                occ++;
                v1[i]++;
                v2[j]++;
            }
        }
    }

    for(int i = 0 ; i <n;i++){
        for(int j = 0 ; j < m;j++){
            if(v1[i] + v2[j] - (v[i][j] == M) == occ){
                cout<<M-1<<endl;
                return;
            }
        }
    }
    cout<<M<<endl;
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