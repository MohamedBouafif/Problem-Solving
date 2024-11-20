#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int m = 1e9 , mi = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        if(a[i] < m){
        m  = min(m, a[i]);
        mi = i;}
    }
    int mm = m;
    cout<<n-1<<endl;
    for(int i = mi ; i>0;i--)
    {
        cout<< i<<" "<< mi +1<<" ";
        cout<< mm + 1 <<" "<< m<<endl;
        mm++;

    }
    mm = m;
    for(int i = mi+1 ; i<n;i++)
    {
        cout<< i + 1 <<" "<<mi+1<<" ";
        cout<< mm + 1 <<" "<< m<<endl;
        mm++;
    }
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}