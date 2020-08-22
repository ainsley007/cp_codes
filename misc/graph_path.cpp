#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll max_fac(ll n)
{
    double x = sqrt(n);
    
    for(int i=2;i<=x;i++)
    {
        if(n%i == 0)
        {
            return n/i;
        }
    }
    return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    ll n,m;
    cin >> n >>m;
    ll counter = 0;
    while(n!=m)
    {
        if(n>m)
        {
            n = max_fac(n);
        }
        else
        {
            m = max_fac(m);
        }
        counter++;
    }

    cout << counter ;
}