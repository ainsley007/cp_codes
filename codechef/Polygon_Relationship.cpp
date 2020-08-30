#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int  main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        ll n;
        cin >> n;
        ll x[n] , y[n];
        for(ll i=0;i<n;i++)
        {
            cin >> x[i] >> y[i];
        }
        if(n <= 5)
        {
            cout << n << '\n';
            continue;
        }
        ll sum = n;
        while(n>=6)
        {
            sum += n/2;
            n = n/2;
        }

        cout << sum << '\n';

        
    }
}