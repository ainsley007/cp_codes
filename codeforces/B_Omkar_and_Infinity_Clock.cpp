#include<bits/stdc++.h>
typedef long long ll ;
using namespace std;
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        ll k;
        cin >> n >> k;
        int  array[n];
        int max;
        for(int i=0;i<n;i++)
        {
            cin >> array[i];
        }
        max = *max_element(array , array+n);
            

        for(int i=0;i<n;i++)
            array[i] = max - array[i];

        if(k%2 != 0)
        {
            for(int i=0;i<n;i++)
                cout << array[i] << ' ';

            cout << '\n';
            continue;
        }
        else
        {
            ll m = *max_element(array , array+n);
            for(int i=0;i<n;i++)
                array[i] = m - array[i];

            for(int i=0;i<n;i++)
                cout << array[i] << ' ';
            
            cout << '\n';
            continue;
        }

    }
    return 0;
}