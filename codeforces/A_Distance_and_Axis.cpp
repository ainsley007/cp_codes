#include<bits/stdc++.h>
using namespace std;
int comp(int n,int k)
{
    if(n < k)
        return k-n;
    else
    {
        return ((n-k) % 2);
    }
    
    
}
int  main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,k;
        cin >>n >> k;
        int res = comp(n,k);
        cout << res <<'\n';
    }
    
}