#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k ;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int m = *max_element(a , a+n);
        // int x = -1;
        if(m > k)
        {
            cout << -1 <<endl;
            continue;
        }
        int sum = 0, count = 1;
        for(int i=0;i<n;)
        {
            sum += a[i];
            if(sum <= k)
            {
                i++;
                continue;
            }
            else
            {
                count++;
                sum =0;
            }
            
        }
        cout << count << '\n';
    }
    return 0;
}