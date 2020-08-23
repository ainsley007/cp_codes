#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int  main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        ll a,b,c;
        ll x,y,z;
        cin >> a >> b >> c;
        cin >> x >> y >> z;
        if(c<y)
        {
            cout << c*2 <<'\n';
        }
        else if(c > y)
        {
            cout << y*2 << '\n';
        }
        else
        {
            cout << c*2 << '\n';
        }
        
        
    }
    return 0;
}