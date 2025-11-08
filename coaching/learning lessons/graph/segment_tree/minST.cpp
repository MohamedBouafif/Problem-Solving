#include <bits/stdc++.h>
using namespace std;

struct minsegtree
{
    int size;
    vector<int> mini;

    void init(int n)
    {
        // increase the nb of elements to closest power of 2
        size = 1;
        while (size < n)
            size *= 2;
        mini.assign(2 * size, 1e9);
    }
    
    void build(vector<int>& a, int x, int lx, int rx)
    {
        if(rx - lx == 1) {
            if(lx < (int)a.size()) {
                mini[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2*x+1, lx, m);
        build(a, 2*x+2, m,rx);
        mini[x] = min(mini[2*x+1] , mini[2*x+2]); 
    }

    void build(vector<int>& a)
    {
        build(a, 0, 0 ,size);
    }
    
    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            mini[x] = v;
            return;
        }

        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, v, 2 * x + 2, m, rx);
        }
        mini[x] = min(mini[2 * x + 1] , mini[2 * x + 2]);
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }

    long long find_min(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return 1e9;
        if (lx >= l && rx <= r)
            return mini[x];
        int m = (lx + rx) / 2;
        long long min1 = find_min(l, r, 2 * x + 1, lx, m);
        long long min2 = find_min(l, r, 2 * x + 2, m, rx);
        return min(min1, min2);
    }
    long long find_min(int l, int r)
    {
        return find_min(l, r, 0, 0, size);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    minsegtree st;
    st.init(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    st.build(a);//log(n)
    
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << st.find_min(l, r) << "\n";
        }
    }
    return 0;
}
